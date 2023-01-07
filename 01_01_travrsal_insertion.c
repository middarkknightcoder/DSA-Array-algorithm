// travsal -- This is one type of the one by one insertion process 

#include<stdio.h>

int main(){

    int a[50] ,size ,i ,pos ,num;

    printf("Enter the size of the array: ");
    scanf("%d" ,&size);

    for(i = 0 ; i < size ; i++){

        printf("Enter the value of the array: ");
        scanf("%d" ,&a[i]);

    }

    for(i = 0 ; i < size ; i++){

        printf("%d\n",a[i]);
    }

    printf("Enter the number of the insertion :");
    scanf("%d" ,&num);

    printf("Enter the position of the element :");
    scanf("%d" ,&pos);

    //This is algorithem of the swaping element

    for(i = size -1 ; i >= pos -1 ; i--){ //This is a worst case of the time complexsity theta(n)

        a[i+1] = a[i];
    }

    a[pos-1] = num;
    size++;

    for(i = 0 ; i < size ; i++){

        printf("%d\n",a[i]);
}
    return 0;
}