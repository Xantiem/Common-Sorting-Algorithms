void insertion_sort(int *array, int arr_size, bool sort) {

    int var, prev_var;

    for (int i=1; i<arr_size; ++i) {
        var = array[i];
        prev_var = i-1;

        if (sort == false) {
            while((prev_var>=0) && (var < array[prev_var])) { // > decending < ascending
                array[prev_var +1] = array[prev_var];
                --prev_var;
            }
        }
        else {
            while((prev_var>=0) && (var > array[prev_var])) { // > decending < ascending
                array[prev_var +1] = array[prev_var];
                --prev_var;
            }          
        }
        array[prev_var+1] = var;
    }