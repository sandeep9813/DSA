 #include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

#define MAX_STACK_SIZE 100

int vstack[MAX_STACK_SIZE];
int tos = -1;

void push(int);
int pop();

void main() {
    int i, res, len, op1, op2, value[100];
    char postfix[100], ch;
    
    printf("Enter the postfix expression: ");
    gets(postfix);
    len = strlen(postfix);

    // Initialize value array
    for (i = 0; i < 100; i++) {
        value[i] = 0;
    }

    for (i = 0; i < len; i++) {
        if (isalpha(postfix[i])) {
            printf("Enter the value of %c: ", postfix[i]);
            scanf("%d", &value[i]);
            push(value[i]);
        } else {
            ch = postfix[i];
            op2 = pop();
            op1 = pop();
            switch (ch) {
                case '+':
                    push(op1 + op2);
                    break;
                case '-':
                    push(op1 - op2);
                    break;
                case '*':
                    push(op1 * op2);
                    break;
                case '/':
                    push(op1 / op2);
                    break;
                case '$':
                    push(pow(op1, op2));
                    break;
                case '%':
                    push(op1 % op2);
                    break;
            }
        }
    }
    printf("The result is:");
    res=pop();
    printf("%d",res);
}

void push(int val) {
     
    vstack[++tos] = val;
}

int pop() {
    int n;
    n= vstack[tos--];
    return n;
}
