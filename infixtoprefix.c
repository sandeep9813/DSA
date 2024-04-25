  #include<stdio.h>
#include<string.h>
#include<ctype.h>

int precedence(char);
void main() {
    int i, otos = -1, ptos = -1, length;
    char infix[100], prestack[100], opstack[100];
    printf("Enter a valid infix expression:\n");
    fgets(infix, 100, stdin);
    length = strlen(infix);

    for (i=length-1;i>=0;i--) {
        if (infix[i] == ')') {
            opstack[++otos] = infix[i];
        } else if (isalpha(infix[i])) {
            prestack[++ptos] = infix[i];
        } else if (infix[i] == '(') {
            while (opstack[otos] != '(') {
                prestack[++ptos] = opstack[otos];
                otos--;
            }
            otos--;
        } else {
            while (otos != -1 && precedence(opstack[otos]) >= precedence(infix[i])) {
                prestack[++ptos] = opstack[otos--];
            }
            opstack[++otos] = infix[i];
        }
    }
    while (otos != -1) {
        prestack[++ptos] = opstack[otos--];
    }
    printf("Postfix expression: ");
    for (i=length-1;i>=0;i--) {
        printf("%c", prestack[i]);
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
