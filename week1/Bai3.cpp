#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    int gt = 1;

    for (int i = 1; i <= n; i++) {
        gt *= i;
    }

    cout << gt;

    return 0;
}

// Time:O(n)
// Memory:O(1)