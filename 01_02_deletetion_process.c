// Deletion process used for the delete the element into the specific position to the array

#include<stdio.h>

int main(){

    int a[50] ,i ,size ,pos;

    printf("Enter the size of the array: ");
    scanf("%d" ,&size);

    for(i = 0 ; i < size ; i++){

        printf("Enter the element of the array: ");
        scanf("%d" ,&a[i]);

    }
    for(i = 0 ; i < size ; i++){

        printf("%d\n" ,a[i]);
    }

    // Here this is algorithem for the swaping the element of the left side

    printf("Enter the position");
    scanf("%d" ,pos);

    if(pos <=0 || pos > size){

        printf("Invalid position");
    }
    else{
        
        for(i = pos -1 ; i < size-1 ; i++){

        a[i] = a[i+1];

    }}

    size--;

    for(i = 0 ; i < size ; i++){

        printf("%d\n" ,a[i]);
    }

    return 0;
}