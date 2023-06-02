#include<stdio.h>
void swap(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main(){
    int num1;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    int num2;    
    printf("Enter number 2: ");
    scanf("%d",&num2);

    printf("\nBefore Swapping: \n");
    printf("Number 1: %d\n",num1);
    printf("Number 2: %d\n",num2);

    
    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;

    printf("\nAfter Swapping: \n");
    printf("Number 1: %d\n",num1);
    printf("Number 2: %d\n",num2);

}