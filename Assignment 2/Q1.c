#include <stdio.h>

int main() {
    char str[100], stack[100];
    int i, top = -1;

    printf("Enter string: ");
    scanf("%s", str);

    // Push into stack
    for(i = 0; str[i] != '\0'; i++){
        top++;
        stack[top] = str[i];
    }

    // Pop from stack (reverse)
    printf("Reversed string: ");
    while(top != -1) {
        printf("%c", stack[top]);
        top--;
    }

    return 0;
}