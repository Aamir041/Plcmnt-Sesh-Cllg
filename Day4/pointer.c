#include <stdio.h>

int main()
{
    int myAge = 43;    
    int *ptr = &myAge;
    int *lost;
    
    // *ptr = 45;

    printf("Size of myAge: %d\n\n", sizeof(myAge));
    printf("Size of ptr: %d\n\n",sizeof(ptr));

    printf("Address of myAge: %p\n\n",ptr);
    printf("ptr value: %d\n\n", *ptr);

    *ptr = 11;
    printf("Address of myAge: %p\n\n",ptr);
    printf("ptr value: %d\n\n", *ptr);

}