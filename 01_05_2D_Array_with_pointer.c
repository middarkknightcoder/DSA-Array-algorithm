//Here print the array using the pointer

#include<stdio.h>

int main(){

    int a[2][3] ,i ,j ,*p;

    p = &a[0][0];

    printf("%u\n",p);

    //Inserting the element using the for loop in the 2d array

    for(i = 0; i < 2 ; i++){

        for(j = 0 ; j <3 ; j++){

            printf("Enter the element: ");
            scanf("%d" ,&a[i][j]);
        }
    }

    //Print the array element using the pointer 

    for(i = 0; i < 2 ; i++){

        for(j = 0 ; j <3 ; j++){

            printf("%d\n" ,*(*(a+i)+j)); // Here not same as a 1d array here first a[0] ,a[1] ,a[2] this is a first element of the and aftar enter colun number
            
        }
    }

    // Here print address of the array element

    for(i = 0; i < 2 ; i++){

        for(j = 0 ; j <3 ; j++){

            printf("%u\n" ,*(a+i)+j); 
            
        }
    }


    // for(i = 0; i < 2 ; i++){

    //     for(j = 0 ; j <3 ; j++){

    //         printf("%u\n" ,&a[i][j]); // Abouve and this are same
            
    //     }
    // }

    //Here check the all posibility in pointer to 2D array

    printf("The array element of the %u\n",*(a+1));
    printf("The array element of the %u\n\n",(a+1)); //Here both are same 


    printf("The array element of the %u\n",*(*(a+1)));
    printf("The array element of the %u\n\n",*a[1]);

    printf("The array element of the %u\n",*(*(a+1)+1));
    printf("The array element of the %u\n\n",*a[1]+1);

    printf("The array element of the %u\n",a[1]+1); //This is a given adddres  of the second row and second column element
    printf("The array element of the %u\n",&a[1]+1); // This is a given the  adress of here used a refrence operetor for so botha are diffrent 

    return 0;
}