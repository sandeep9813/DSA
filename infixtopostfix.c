 #include<stdio.h>
#include<string.h>
#include<ctype.h>

int precedence(char);
void main() {
    int i, otos = -1, ptos = -1, length;
    char infix[100], poststack[100], opstack[100];
    printf("Enter a valid infix expression:\n");
    fgets(infix, 100, stdin);
    length = strlen(infix);

    for (i = 0; i < length; i++) {
        if (infix[i] == '(') {
            opstack[++otos] = infix[i];
        } else if (isalpha(infix[i])) {
            poststack[++ptos] = infix[i];
        } else if (infix[i] == ')') {
            while (opstack[otos] != '(') {
                poststack[++ptos] = opstack[otos];
                otos--;
            }
            otos--;
        } else {
            while (otos != -1 && precedence(opstack[otos]) >= precedence(infix[i])) {
                poststack[++ptos] = opstack[otos--];
            }
            opstack[++otos] = infix[i];
        }
    }
    while (otos != -1) {
        poststack[++ptos] = opstack[otos--];
    }
    printf("Postfix expression: ");
    for (i = 0; i <= ptos; i++) {
        printf("%c", poststack[i]);
    }
    printf("\n");
}

int precedence(char ch) {
    switch (ch) {
        case '$':
            return 4;
        case '*':
        case '/':
            return 3;
        case '+':
        case '-':
            return 2;
        default:
            return 1;
    }
}
