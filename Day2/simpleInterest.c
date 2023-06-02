// Write a C program to find simple interest.
#include<stdio.h>
int main(){
    float P;
    float r;
    float t;
    float A;
    printf("Enter intial balance: ");
    scanf("%f",&P);
    printf("Enter annual rate: ");
    scanf("%f",&r);
    printf("Enter time in years: ");
    scanf("%f",&t);
    A = (P*r*t)/100;
    printf("Simple Interest: %f",A);
}