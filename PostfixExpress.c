#include<stdio.h>
#include<ctype.h>

int precedence(char);
char pop();
void push(char);

char postfix[50], infix[50], s[50];
int top = -1;

int main(void) {
    int i, j = 0;
    char ch, elem;

    printf("Enter a valid infix expression\n");
    gets(infix);

    push('#');

    for (i = 0; infix[i] != '\0'; i++) {
        ch = infix[i];

        if (isalnum(ch))
            postfix[j++] = ch;
        else if (ch == '(')
            push(ch);
        else if (ch == ')') {
            while (s[top] != '(')
                postfix[j++] = pop();
            elem = pop();
        } else {
            while (precedence(s[top]) >= precedence(ch)) {
                if ((ch == '^') && (s[top] == '^'))
                    break;
                postfix[j++] = pop();
            }
            push(ch);
        }
    }

    while (s[top] != '#')
        postfix[j++] = pop();

    postfix[j] = '\0';

    printf("The postfix expression is %s\n", postfix);
}

int precedence(char e) {
    switch (e) {
        case '#':
            return (-1);
            break;
        case '(':
            return (0);
            break;
        case '+':
        case '-':
            return (1);
            break;
        case '%':
        case '*':
        case '/':
            return (2);
            break;
        case '^':
            return (3);
            break;
        default:
            printf("Error \n");
        return -1;
    }
}

void push(char ele) {
    ++top;
    s[top] = ele;
}

char pop() {
    char e;
    e = s[top];
    --top;
    return e;
}