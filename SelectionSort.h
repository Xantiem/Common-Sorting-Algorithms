void selection_sort(int *array, int arr_size, bool sort) {
    int min_index, swp;
    for (int i=0;i<arr_size-1;i++) {
        min_index = i;

        for (int j=i+1; j<arr_size; j++) {
            switch (sort) {
                case SORT_ASCENDING:
                    if (array[j] < array[min_index])
                    min_index = j;
                    break;
                case SORT_DESCENDING:
                    if (array[j] > array[min_index])
                    min_index = j;
                    break;
            }
        }

        swp = array[i];
        array[i] = array[min_index];
        array[min_index] = swp;
    }
}
