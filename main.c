/* 
Based on the work provided by:

Mishra, A. D., & Garg, D. (2008). Selection of best sorting algorithm. International Journal of intelligent information Processing, 2(2), 363-368. 
*/

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "SortingAlgorithms.h"

int main() {

    int unsorted_array[] = {3, 5, 9, 2, 7, 6, 0, 8, 1, 4};
    int ele_c = sizeof(unsorted_array)/sizeof(int);

    //bubble_sort(unsorted_array, ele_c, SORT_ASCENDING);
    //insertion_sort(unsorted_array, ele_c, SORT_ASCENDING);

    for (int i=0;i<ele_c;i++)
        printf("%d ", unsorted_array[i]);



    return EXIT_SUCCESS;
}
