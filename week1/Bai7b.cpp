#include <iostream>
using namespace std;

void xoaDong(int a[][100], int &n, int m, int i) {
    for (int k = i; k < n - 1; k++) {
        for (int j = 0; j < m; j++) {
            a[k][j] = a[k + 1][j];
        }
    }

    n--;
}

int main() {
    int n, m;
    int a[100][100];
    cin >> n;
    cin >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int i;
    cin >> i;

    xoaDong(a, n, m, i);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}

// Time:O(mxn)
// Memory: O(mxn)