#include<stdio.h>

int main(){
    // Area of Circle
    float radius;
    printf("Enter radius: ");
    scanf("%f",&radius);
    float areaCircle;
    float pi = 3.14;
    areaCircle = pi*radius*radius;
    float circumference;
    circumference = 2*pi*radius;
    printf("Circe Radius: %0.2f \nIt's Area is: %0.2f \nIt's Circumference is: %0.2f \n",radius,areaCircle,circumference);

    // Area of triangle
    float height;
    printf("Enter Height of Triangle: ");
    scanf("%f",&height);
    float base;
    printf("Enter Base of Triangle: ");
    scanf("%f",&base);
    float areaTriangle = (height*base)*0.5;
    printf("Area of Traiangle with height %0.2f and base %0.2f is %0.2f",height,base,areaTriangle);

    // Area of Rectangle
    float length;
    printf("Enter length of rectangle: ");
    scanf("%f",&length);
    float breadth;
    printf("Enter breadth of rectangle: ");
    scanf("%f",&breadth);
    float areaRectangle = length*breadth;
    printf("Area of Rectangle with length %0.2f and breadth %0.2f is %0.2f",length,breadth,areaRectangle);



}