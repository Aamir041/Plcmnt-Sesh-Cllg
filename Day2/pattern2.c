#include<stdio.h>

int main(){
    printf("Enter number of rows: ");
    int n ;
    int k = 1;
    scanf("%d",&n);
    while (k<=n){
        for(int i=0; i<k; i++){
            printf("*");
        }
        printf("\n");
        k++;
    }
    
}