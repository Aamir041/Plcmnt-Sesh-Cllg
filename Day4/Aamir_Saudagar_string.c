#include<stdio.h>
int main(){
    char str[100];
    char *ptr = &str;
    printf("Enter string: ");
    scanf("%s", &str);
    int i = 0;
    while(*ptr != '\0'){
        ptr = &str[i];
        printf("%c",*ptr);
        i++;
    }
    
}