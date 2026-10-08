#include <iostream>
using namespace std;

int UCLN(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

void rutGon(int &a, int &b) {
    int ucln = UCLN(a, b);

    a = a / ucln;
    b = b / ucln;
}

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    if (b == 0) {
        return 0;
    }

    rutGon(a, b);
    cout << a << "/" << b;

    return 0;
}

// Time:O(log n)
// Memory:O(1)