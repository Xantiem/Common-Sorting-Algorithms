void bubble_sort(int *array, int arr_size, bool sort) {
    bool exchanged;
    int exchange_c;

    for (int i=0; i<arr_size-1; i++) {
        exchanged = false;

        for (int j=0;j<arr_size-i-1;j++) {

            switch (sort) {
                case SORT_DESCENDING:
                    if (array[j] < array[j+1]) { /* > sort asc or < sort dec*/
                        exchange_c = array[j];
                        array[j] = array[j+1];
                        array[j+1] = exchange_c;
                        exchanged = true;
                    }
                    break;
                case SORT_ASCENDING:
                    if (array[j] > array[j+1]) { /* > sort asc or < sort dec*/
                        exchange_c = array[j];
                        array[j] = array[j+1];
                        array[j+1] = exchange_c;
                        exchanged = true;
                    }
                    break;
            }
        }
        if (exchanged==false) break;
    }
}
