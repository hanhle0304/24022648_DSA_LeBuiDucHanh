#include <iostream>
using namespace std;

void sort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    int a[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

// Time:O(n^2)
// Memory:O(n)