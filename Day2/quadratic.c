#include<stdio.h>
#include<math.h>

int main(){
    printf("Enter coeff of power 2: ");
    float a;
    scanf("%f",&a);
    printf("Enter coeff of power 1: ");
    float b;
    scanf("%f",&b);
    printf("Enter constant: ");
    float c;
    scanf("%f",&c);

    float r1 = ((-1*b)-(sqrt( (b*b) - (4*a*c) )))/(2*a);
    float r2 = ((-1*b)+(sqrt( (b*b) - (4*a*c) )))/(2*a);
    printf("Root 1: %f\n",r1);
    printf("Root 2: %f\n",r2);

}