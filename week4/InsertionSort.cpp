void insertionSort(int arr[], int n) {
    
    for (int i = 1; i < n; i++) {
        int x = arr[i];
        int pos = i - 1;
        
        while (pos >= 0 && arr[pos] > x) {
            arr[pos + 1] = arr[pos];
            pos--;
        }
        
        arr[pos + 1] = x
    }
    
}
