#define SORT_DECENDING true
#define SORT_ASCENDING false

void bubble_sort(int *array, int arr_size, bool sort) {
    bool exchanged;
    int exchange_c;

    for (int i=0; i<arr_size-1; i++) {
        exchanged = false;

        for (int j=0;j<arr_size-i-1;j++) {

            if (sort == true) {
                if (array[j] < array[j+1]) { /* > sort asc or < sort dec*/
                    exchange_c = array[j];
                    array[j] = array[j+1];
                    array[j+1] = exchange_c;
                    exchanged = true;
                }
            }
            else {
                if (array[j] > array[j+1]) { /* > sort asc or < sort dec*/
                    exchange_c = array[j];
                    array[j] = array[j+1];
                    array[j+1] = exchange_c;
                    exchanged = true;
                }    
            }
        }
        if (exchanged==false) break;
    }
}
