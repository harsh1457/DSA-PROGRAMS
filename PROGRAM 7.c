//Postfix Evaluation 
#include <stdio.h>
#include <ctype.h>
#define MAX 100 
float stack[MAX];
int top = -1;
void push(float value) {
    stack[++top] = value;
}
float pop() {
    return stack[top--];
}
void evaluateexp(char* exp) {
    float v1, v2;
    int i;

    for (i = 0; exp[i] != '\0'; i++) {
        char ch = exp[i]; 
        if (isdigit(ch)) {
            push(ch - '0'); 
        } else {
            v2 = pop();
            v1 = pop();

            switch (ch) {
                case '*':
                    push(v1 * v2);
                    break;
                case '+':
                    push(v1 + v2);
                    break;
                case '-':
                    push(v1 - v2);
                    break;
                case '/':
                    push(v1 / v2);
                    break;
            }
        }
    }
    printf("Result: %.2f\n", pop());
}

int main() {
    char exp[MAX];
    printf("Enter a Postfix Expression (e.g., 23+4*): ");
    scanf("%s", exp); 
    evaluateexp(exp);
    return 0;
}
