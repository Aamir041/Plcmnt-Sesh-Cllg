#include <stdio.h>

int main(){
    
    printf("Enter Salary: ");
    float salary;
    scanf("%f", &salary);
    float temp = salary;
    float bracket = 1;
    float tax = 0;

    if(salary <=0){
        printf("Invalid Salaray!");
        return 0;
    }

    while (temp > 0){
        int sum = 0;
        if (temp >= 10000){
            sum = 10000;
            temp -= sum;
            
        }
        else{
            sum = temp;
            temp = 0;
        }

        if (bracket == 1){
            tax += sum * 0.02;
        }
        else if (bracket == 2){
            tax += sum * 0.05;
        }
        else if (bracket == 3){
            tax += sum * 0.07;
        }
        else if (bracket == 4){
            tax += sum * 0.1;
        }
        else{
            tax += sum * 0.15;
        }
        bracket++;
    }
    printf("Tax: %0.0f\n",tax);
    int exit = 0;
}