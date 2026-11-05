void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_id = i;
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_id]) min_id = j;
        }
        
        if (min_id != i) swap(arr[i], arr[min_id]);
    }
}