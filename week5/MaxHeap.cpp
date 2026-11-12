#include <iostream>
using namespace std;


struct MaxHeap {
int a[1000];
int n = 0;

void swim(int i) {
	while (i > 1 && a[i / 2] < a[i]) {
		swap(a[i / 2], a[i]);
		i /= 2;
	}
}

void sink(int i) {
	while (2 * i <= n) {
		int j = 2 * i;
		if (j + 1 <= n && a[j + 1] > a[j])
			j++;
		if (a[i] >= a[j]) break;
		swap(a[i], a[j]);
		i = j;
	}
}

void add(int x) {
	a[++n] = x;
	swim(n);
}

int root() {
	return a[1];
}

void removeRoot() {
	a[1] = a[n];
	n--;
	sink(1);
}

}

