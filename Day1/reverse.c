#include<stdio.h>

int main(){
    printf("Enter number: ");
    int number ;
    scanf("%d",&number);
    int revNum = 0;
    while(number !=0){
        revNum = revNum * 10 + number%10;
        number = number/10;
    }
    printf("%d\n",revNum);
}