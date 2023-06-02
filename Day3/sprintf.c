#include<stdio.h>
int main(){
    char letter[50];
    char string[50];
    scanf("%s",&string);
    int length = sprintf(letter,"%s",string);
    printf("%d",length);
}