// Write a C program to find compound interest.
#include<stdio.h>
#include<math.h>
int main(){
    double P;
    double r;
    double t;
    double n;
    double A;
    printf("Enter intial balance: ");
    scanf("%f",&P);
    printf("Enter annual rate: ");
    scanf("%f",&r);
    printf("Enter time in years: ");
    scanf("%f",&t);
    printf("Enter number time interest is compounded per years: ");
    scanf("%f",&n);
    A = (P*pow((1+(r/n)),(n*t)))-P;
    printf("Compound Interest: %f",A);
}