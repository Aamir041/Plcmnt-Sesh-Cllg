#include<stdio.h>

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    if(num%5){
        printf("It is divisible");
    }
    else{
        printf("Not divisible.");
    }
}