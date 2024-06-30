#include <stdio.h>

int main(int argc, char *argv[]){


    // int matrix[6][6] = {
    //     {0, 4, 3, 2, 1, 0},
    //     {4, 0, 0, 0, 0, 1},
    //     {3, 0, 0, 0, 0, 2},
    //     {2, 0, 0, 0, 0, 2},
    //     {1, 0, 0, 0, 0, 2},
    //     {0, 1, 2, 2, 2, 0}
    // };

    // int i;
    // int j;
    // int k;
    // int l;

    // i = 0;
    // j = 0;
    // k = 0;
    // l = 0;

    // while (i <= 5)
    // {
    //     while (j <= 5)
    //     {
    //         if (matrix[i][j] == 4)
    //         {
    //             if (i == 0) // verification et remplissage si 4 in ligne 1
    //             {
    //                 k = 1;
    //                 l = 1;
    //                 while (k <= 4)
    //                 {
    //                     //printf("%d", l);
    //                     matrix[l][j] = l;
    //                     //printf("valeur %d ligne %d, colonne %d \n\t ", matrix[i][k], i , k);
    //                     k++;
    //                     l++;
    //                 }
    //                 l = 0; 
    //             }
    //             if (i == 5) // verification et remplissage si 4 in ligne 5
    //             {
    //                 k = 1;
    //                 l = 4;
    //                 while (k <= 4)
    //                 {
    //                     //printf("%d", l);
    //                     matrix[l][j] = l;
    //                     //printf("valeur %d ligne %d, colonne %d \n\t ", matrix[i][k], i , k);
    //                     k++;
    //                     l--;
    //                 }
    //                 l = 0; 
    //             } 
    //             if (j == 0) // verification et remplissage si 4 in col 1
    //             {
    //                 k = 1;
    //                 l = 1;
    //                 while (k <= 4)
    //                 {
    //                     //printf("%d", l);
    //                     matrix[i][k] = l;
    //                     //printf("valeur %d ligne %d, colonne %d \n\t ", matrix[i][k], i , k);
    //                     k++;
    //                     l++;
    //                 }
    //                 l = 0; 
    //             } 
                
    //             if (j == 5) 
    //             {
    //                 k = 4;
    //                 l = 1;
    //                 while (k >= 1)
    //                 {
    //                     //printf("%d", l);
    //                     matrix[i][k] = l;
    //                     //printf("valeur %d ligne %d, colonne %d \n\t ", matrix[i][k], i , k);
    //                     k--;
    //                     l++;
    //                 }
    //                 l = 0; 
    //             }
    //         }
            
    //         //printf("%d", matrix[i][j]);
    //         j++;   
    //     }
    //     //printf("\n");
    //     j = 0;
    //     i++;
    // }

//     i = 0;
//     j = 0;
//     while (i <= 5)
//     {
//         while (j <= 5)
//         {
//             printf("%d\t", matrix[i][j]);
//             j++;
//         }
//         printf("\n");
//         j = 0;
//         i++;
//     }



    char *arr = argv[1];

    int i;
    int j;
    int k;

    i = 0;
   

    int matrix[6][6] = {
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0}
    };


    j = 0;
    k = 1;

    while (arr[i] != '\0')
    {
        //printf("%c", arr[i]);
        if (arr[i] != ' ')
        {
            while (k >=4)
            {
                printf("%c", arr[i]);
                matrix[j][k] = arr[i];
                k++;
            }

            j = 5;
            k = 1;
            while (k <= 4)
            {
                printf("%c", arr[i]);
                matrix[j][k] = arr[i];
                k++;
            }

            j = 1;
            k = 1;
            while (k <= 4)
            {
                printf("%c", arr[i]);
                matrix[j][k] = arr[i];
                j++;
            }

            j = 1;
            k = 5;
            while (k <= 4)
            {
                printf("%c", arr[i]);
                matrix[j][k] = arr[i];
                j++;
            }


        }
        i++;
    }
}