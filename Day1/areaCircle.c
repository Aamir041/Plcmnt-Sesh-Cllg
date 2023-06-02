#include<stdio.h>

int main(){
    printf("Enter radius: ");
    float radius;
    scanf("%f",&radius);
    float pie = 3.14; 
    float area = pie*radius*radius;
    float circumference = 2*pie*radius;
    printf("Area of circle is %f\n",area);
    printf("Circumference of circle is %f\n",circumference);

}
