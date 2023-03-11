#include "bubble_sort.h"

/*
bubble sort algorithm (0=smaller, 'size'=biggest):
    - vector: array to be sorted
    - size: number of elements to sort
*/
void bubble_sort(int * vector, int size){
    int counter;
    int pass;

    /* trough all elements */
    for(counter=0; counter < size; counter++){

        /* last elements 'size-counter' are already bigger */
        for (pass = 1; pass < size - counter; pass++){
            /* if greater, swap */
            if (vector[pass]<vector[pass-1]){
                int hold;
                hold = vector[pass];
                vector[pass] = vector[pass-1];
                vector[pass-1] = hold;
            }            
        }

    }
}