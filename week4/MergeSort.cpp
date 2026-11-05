void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    
    int *leftarr = new int[n1];
    int *rightarr = new int[n2];
    
    for (int i = 0; i < n; i++) {
        leftarr[i] = arr[i];
    }
    
    for (int j = 0; j < n; j++) {
        rightarr[i] = arr[mid + i + 1];
    }
    
    int i = 0, j = 0, current = left;
    
    while (i < n1 && j < n2) {
        if (leftarr[i] < rightarr[i]) arr[current++] = leftarr[i++];
        else arr[current++] = rightarr[j++];
    }
    
    while (i < n1) arr[current++] = leftarr[i++];
    
    while (j < n2) arr[current++] = rightarr[j++];
    
    delete[] LeftArr, RightArr;
    
}

void split(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left)/2;
        
        split(arr, left, mid);
        split(arr, mid + 1, right);
        
        merge(arr, left, mid, right);
    }
}

void MergeSort(int A[], int n)
{
    split(A, 0, n - 1);
}
