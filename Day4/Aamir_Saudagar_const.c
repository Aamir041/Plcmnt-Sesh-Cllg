#include<stdio.h>

int main(){
    const int num = 11;
    int *p = &num;

    printf("\nBefore: ");
    printf("%d\n",num);

    *p = 41; 

    printf("\nAfter: ");
    printf("%d\n",num);

}