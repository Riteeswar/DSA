#include <stdio.h>

int main() {
    int arr[100], stack[100];
    int n, i, top = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        while(top != -1 && arr[i] > arr[stack[top]]){
            printf("%d -> %d\n", arr[stack[top]], arr[i]);
            top--;
        }
        top++;
        stack[top] = i;
    }

    while(top != -1){
        printf("%d -> -1\n", arr[stack[top]]);
        top--;
    }

    return 0;
}