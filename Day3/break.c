#include<stdio.h>
#include<math.h>

int main(){
      int base;
      int exponent;
      double result=1;
      printf("Enter base number: ");
      scanf("%d",&base);
      printf("Enter exponent: ");
      scanf("%d",&exponent);
      for(int i=0; i<exponent; i++){
        result *= base;
      }
      printf("%f",result);
}