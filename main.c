#include <stdio.h>

void swap(int *a, int *b);

int main(){
    int num1, num2;
    printf("Enter the value of num1 \n");
    scanf("%d", &num1);
    printf("Enter the value of num2 \n");
    scanf("%d", &num2);

    printf("The value of num1 and num2 before swapping is %d and %d\n", num1, num2);
    swap(&num1, &num2);
    printf("The value of num1 and num2 after swapping is %d and %d\n", num1, num2);
    return 0;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}