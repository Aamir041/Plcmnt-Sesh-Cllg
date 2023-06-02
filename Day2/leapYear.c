#include<stdio.h>

int main(){
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    if(year%400!=0){
        if(year%4 == 0){
            if(year%100 == 0){
                 printf("It's not a Leap year.");
            }
            else{
                 printf("It's a Leap year.");
            }
        }
        else{
             printf("It's not a Leap year.");
        }
    }
    else{
        printf("It's a Leap year.");
    }
}