void insertion_sort(int* arr, int size) {
    int key, temp;

    for (int i = 1; i < size; i++) {
        key = arr[i];
        temp = i;

        while ((temp > 0) && (arr[temp - 1] > key)) {
            arr[temp] = arr[temp - 1];
            temp--;
        }
        array[temp] = key; 
    }
}