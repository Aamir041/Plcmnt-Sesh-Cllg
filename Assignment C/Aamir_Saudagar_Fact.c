#include<stdio.h>

void printFibonacci(){
    int n;
    printf("Till where you wanna print FIBONACCI series: ");
    scanf("%d",&n);
    if(n <= 0){
        printf("Invalid Number !");
        return ;
    }
    int n1 = 0;
    int n2 = 1;
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(i == 1){
            printf("%d ",n1);
        }
        else if(i == 2){
            printf("%d ",n2);
        }
        else{
            sum = n1 + n2;
            n1 = n2;
            n2 = sum;
            printf("%d ",sum);
        }
    }
    printf("\n");
}

void factorial(){
    int n;
    printf("Enter number to print factorial of: ");
    scanf("%d",&n);
    if(n<0){
        printf("Invalid number.");
    }
    else if(n == 0){
        printf("1 is factorail of %d",n);
    }
    else{
        int fact = 1;
        for(int i=1; i<=n; i++){
            fact *= i;
        }
        printf("%d is factorial of %d",fact,n);
    }
}

int main(){
    
    printf("Press 1 for Fibonacci\n");
    printf("Press 2 for Factorial\n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: printFibonacci();
                break;
        case 2: factorial();
                break;
        default : printf("Invalid Code! Re Run Code");
                  break;
    }

}