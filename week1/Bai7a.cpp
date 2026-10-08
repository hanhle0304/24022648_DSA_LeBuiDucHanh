#include <iostream>
using namespace std;

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

    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
    }

    cout << sum;

    return 0;
}

// Time:O(mxn)
// Memory: O(mxn)