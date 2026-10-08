#include <iostream>
using namespace std;

void chenPhanTu(int a[], int &n, int y, int m) {
    for (int i = n; i > m; i--) {
        a[i] = a[i - 1];
    }

    a[m] = y;
    n++;
}

int main() {
    int n;
    int a[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int y, m;
    cin >> y;
    cin >> m;

    chenPhanTu(a, n, y, m);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

// Time:O(n)
// Memory:O(n)