#include<stdio.h>

int main(){
    int side1;
    int side2;
    int side3;
    printf("Enter side 1: ");
    scanf("%d",&side1);
    printf("Enter side 2: ");
    scanf("%d",&side2);
    printf("Enter side 3: ");
    scanf("%d",&side3);
    if(side1 == side2 && side2 == side3 && side1 == side3){
        printf("It is equivalent Triangle");
    }
    else{
        printf("It is isoceles triangle");
    }
    
}