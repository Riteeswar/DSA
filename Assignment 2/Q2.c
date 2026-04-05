#include <stdio.h>

int main() {
    char exp[100], stack[100];
    int i, top = -1;

    printf("Enter expression: ");
    scanf("%s", exp);

    for(i = 0; exp[i] != '\0'; i++) {
        if(exp[i] == '(') {
            top++;
            stack[top] = '(';
        }
        else if(exp[i] == ')') {
            if(top == -1) {
                printf("Not Balanced");
                return 0;
            }
            top--;
        }
    }

    if(top == -1){
        printf("Balanced Expression");
    }
    else{
        printf("Not Balanced");
    }
    return 0;
}