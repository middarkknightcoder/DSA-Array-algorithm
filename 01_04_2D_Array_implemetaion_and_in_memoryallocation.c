#include<stdio.h>

int main(){

    //you can insert element in arry this type

    // int arr1[2][3] = {1,2,3,4,5,6};
    int arr1[2][3] = {{1,2,3},{4,5,6}} ,*pot; // inserting by a row
   
    pot = arr1;

    printf("The address of the array : %u\n" ,pot);
    printf("The address of the array : %u\n" ,&arr1[0][0]);

    printf("%d\n" ,arr1[0][0]);
    printf("%d\n" ,arr1[0][1]);
    printf("%d\n" ,arr1[0][2]);
    printf("%d\n" ,arr1[1][0]);
    printf("%d\n" ,arr1[1][1]);
    printf("%d\n" ,arr1[1][2]);

    // Here array element insert by a for loop (Row Mager)

    int i, j ,arr2[2][3];

    for(i = 0 ; i < 2 ; i++){

        for(j = 0 ; j < 3 ; j++){

            printf("Enter the element for array :");
            scanf("%d" ,&arr2[i][j]);
        }
    }

    for(i = 0 ; i < 2 ; i++){

        for(j = 0 ; j < 3 ; j++){

            printf("%d\n" ,arr2[i][j]);
        }
    }

    //Here array element insert by a for loop (Column Major);

    int p, q ,arr3[2][3];

    for(q = 0 ; q < 3 ; q++){

        for(p = 0 ; p < 2  ; p++){

            printf("Enter the element for array :");
            scanf("%d" ,&arr3[p][q]);
        }
    }

   for(q = 0 ; q < 3 ; q++){

        for(p = 0 ; p < 2  ; p++){

            printf("%d\n" ,arr3[p][q]);
        }
    }

    return 0;
}