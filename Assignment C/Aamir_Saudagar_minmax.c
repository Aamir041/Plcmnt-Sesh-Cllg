#include<stdio.h>
#include<limits.h>

int minimum(int array[], int length){
    int min = INT_MAX;
    for(int i=0; i<length; i++){
        if(min > array[i]){
            min = array[i];
        }
    }
    return min;
}

int maximum(int array[], int length){
    int max = INT_MIN;
    for(int i=0; i<length; i++){
        if(max < array[i]){
            max = array[i];
        }
    }
    return max;
}

int main(){
    int array[10];
    int length = sizeof(array)/sizeof(array[0]);

    printf("\n");
    for(int i=0; i<length; i++){
        printf("Enter number: ");
        scanf("%d",&array[i]);
    }
    printf("\n");
    
    int min = minimum(array,length);
    int max = maximum(array,length);
    printf("MAX: %d \nMIN: %d",max,min);
}