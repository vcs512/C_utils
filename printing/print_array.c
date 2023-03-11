#include <stdio.h>
#include "print_array.h"

/*
Print array elements:
    - array: vector to be printed
    - size: number of elements to print
*/
void print_array(int* array, int size){
    int counter;

    for (counter=0; counter<size; counter++){
        printf("%d ", array[counter]);
    }

    printf("%c", '\n');
}