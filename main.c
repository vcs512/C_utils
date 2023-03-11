/* main function to test utils*/

/* C std libs*/
#include <stdio.h>

/* self libs */
#include "./sorting/bubble_sort/bubble_sort.h"
#include "./printing/print_array.h"

/* constants*/
#define SIZE 1000

int main(void){

    // int a[SIZE] = {10, 8, 9, 7, 6, 1, 2, 3, 4, 5};

    int a[SIZE];
    for (int i; i<SIZE; i++){
        a[i] = SIZE-i-1;
    }

    bubble_sort(a, SIZE);
    print_array(a, SIZE);

    return 0;
}