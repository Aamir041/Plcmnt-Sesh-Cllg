#include<stdio.h>

int main(){
    printf("Enter character: ");
    char c;
    scanf("%c",&c);
    if(c>='a' && c<='z'){
        printf("%c is Lower case character",c);
    }
    else if(c>='A' && c<='Z'){
        printf("%c is Upper case character",c);
    }
    else{
        printf("Invalid Character");
    }
}