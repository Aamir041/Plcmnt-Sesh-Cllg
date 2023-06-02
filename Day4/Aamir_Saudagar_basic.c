#include<stdio.h>
int main(){
    int num;
    int *pNum;
    pNum = &num;
    num = 100;
    printf("\nUsing variable num: \n");
    printf("value of num: %d\naddress of num: %p\n",num,&num);

    printf("\nUsing pointer: \n");
    printf("Address at pointer: %p\ncontent of pointer: %d\n",pNum,*pNum);
}