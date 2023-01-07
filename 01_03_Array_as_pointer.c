//Array name itself as a adress of the array element 
//you can write array as pointer 

//simple thinks about the pointer 

#include<stdio.h>

int main(){

    int a = 10 ,*p; // This is pointer to integer

    p = &a; // pointer stored only address of the another variable

    printf("The value of the a is %d\n" ,a);
    printf("The adress of the a is %u\n", &a);
    printf("The addres of the a is %u\n" , p);
    printf("The value of the a using p is %d\n" , *p); // * -- it is a value denoter
    printf("The adrees of the p is %u\n" ,&p);

    // Array as a pointer (note : array name itself as a adress )

    int b[4] , *q;

    q = b ; //This is a base adress of the array (note : Here you can not b++ or q++)

    printf("%u\n" ,q); // both ara given same value of the address
    printf("%u\n" ,b);

    b[0] = 10;
    b[1] = 20;
    b[2] = 30;
    b[3] = 40;

    // Here print the array element

    printf("Here print the value of the given array\n");

    printf("%d\n" ,b[0]);
    printf("%d\n" ,0[b]); // This is simple way to print array elemnt
    printf("%d\n" ,*(b));
    printf("%u\n" ,b);
    printf("%u\n\n" ,&b[0]);

    

    printf("%d\n" , b[1]);
    printf("%d\n" , *(b+1)); // Here print array element using the pointer
    printf("%u\n\n" , (b+1)); // This is a give adrees of the 1 index array element

    printf("%d\n" , *(b+2));
    printf("%d\n\n" , *(q+2)); // Here print value using the base address

    printf("%d\n" , *(b+3));

    return 0;
}