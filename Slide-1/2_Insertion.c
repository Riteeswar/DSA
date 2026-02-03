#include <stdio.h>
int main(){
    int a[50];
    int size, num, pos;

    printf("Enter the array size: ");
    scanf("%d", &size);

    printf("Enter %d elements: \n", size);
    for(int i=0; i<size; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter element to be inserted: ");
    scanf("%d", &num);
    printf("Enter the position(starting from 1): ");
    scaf("%d", &pos);

    // shift elements to the right
    for(int i=(size-1); i>=(pos-1); i--){
        a[i+1] = a[i];
    }
    // Inserting element
    a[pos-1] = num;
    size++;
    printf("Array after insertion: \n");
    for(i=0; i<size; i++){
        printf("%d", a[i];)     
    }
    return 0;
}