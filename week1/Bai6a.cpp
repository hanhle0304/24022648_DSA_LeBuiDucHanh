#include <iostream>
using namespace std;

void xoaPhanTu(int a[], int &n, int i) {
    for (int j = i; j < n - 1; j++) {
        a[j] = a[j + 1];
    }

    n--;
}

int main() {
    int n;
    int a[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k;
    cin >> k;

    xoaPhanTu(a, n, k);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

// Time:O(n)
// Memory:O(n)