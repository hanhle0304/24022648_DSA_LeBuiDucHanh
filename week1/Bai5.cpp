#include <iostream>
using namespace std;

int main() {
    int n;
    double a[100];
    cin >> n;

    double sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    double tb = sum / n;

    for (int i = 0; i < n; i++) {
        if (a[i] >= tb) {
            cout << a[i] << " ";
        }
    }

    return 0;
}

// Time:O(n)
// Memory:O(n)