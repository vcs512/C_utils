/* main function to test utils*/

/* C std libs*/
#include <stdio.h>

/* self libs */
#include "./sorting/bubble_sort/bubble_sort.h"
#include "./printing/print_array.h"
#include "./dummy_functions/dummy.h"

/* constants*/
#define SIZE 1000

int main(void){


    /* 1. Simple bubble sort and array */
    // /* int a[SIZE] = {10, 8, 9, 7, 6, 1, 2, 3, 4, 5}; */

    // int a[SIZE];
    // for (int i; i<SIZE; i++){
    //     a[i] = SIZE-i-1;
    // }

    // bubble_sort(a, SIZE);
    // print_array(a, SIZE);


    /* 2. pointer to function*/
    int (*func_ptr[2])(int a1, int a2);
    func_ptr[0] = dummy1;
    func_ptr[1] = dummy2;

    for (int i=0; i < 2; i++){
        func_ptr[i](i, i+1);
    }

    return 0;
}