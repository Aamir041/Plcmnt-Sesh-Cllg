#include<stdio.h>

void printArray(int array[],int length){
    for(int i=0; i<length; i++){
        printf("%d ",array[i]);
    }
    printf("\n\n");
}

int main(){
    int array[5] = {54,29,3,19,91};
    int length = sizeof(array)/sizeof(array[0]);

    printf("Before: ");
    printArray(array,length);
    for(int i=0; i<length; i++){
        for(int j=0;j<length-1; j++){
            if(array[i] < array[j]){
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("After: ");
    printArray(array,length);
    
}