#include<stdio.h>

int main(){
    printf("Enter number of rows: ");
    int n ;
    scanf("%d",&n);
    int space = n/2+1;
    int star = 1;
    while(space >= 0){
        for(int i = 0; i<space; i++){
            printf(" ");
        }
        for(int i=0; i<star; i++){
            printf("*");
        }
        printf("\n");
        space-=1;
        star+=2;
    } 
    

}