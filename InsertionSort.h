void insertion_sort(int *array, int arr_size) {

    int var, prev_var;

    for (int i=1; i<arr_size; ++i) {
        var = array[i];
        prev_var = i-1;
        while((prev_var>=0) && (var < array[prev_var])) {
            array[prev_var +1] = array[prev_var];
            --prev_var;
        }
        array[prev_var+1] = var;
    }

}