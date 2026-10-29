#include <iostream>
using namespace std;

class ArrayList {
private:
    int *arr;
    int capacity;
    int count;

public:
    ArrayList(int cap = 100) {
        capacity = cap;
        count = 0;
        arr = new int[capacity];
    }

    bool isFull() {
        return count == capacity;
    }

    void insertFirst(int x) {
        if (isFull()) {
            return;
        }

        for (int i = count; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = x;
        count++;
    }

    void insertLast(int x) {
        if (isFull()) {
            return;
        }

        arr[count] = x;
        count++;
    }

    int deleteFirst() {
        if (count == 0) {
            return -1;
        }

        int value = arr[0];

        for (int i = 0; i < count - 1; i++) {
            arr[i] = arr[i + 1];
        }

        count--;
        return value;
    }

    int deleteLast() {
        if (count == 0) {
            return -1;
        }

        count--;
        return arr[count];
    }

    int getFirst() {
        if (count == 0) {
            return -1;
        }

        return arr[0];
    }

    int getLast() {
        if (count == 0) {
            return -1;
        }

        return arr[count - 1];
    }

    int size() {
        return count;
    }

    bool isEmpty() {
        return count == 0;
    }

    void print() {
        for (int i = 0; i < count; i++) {
            cout << arr[i] << " -> ";
        }

        cout << "END" << endl;
    }

    ~ArrayList() {
        delete[] arr;
    }
};


class Stack {
private:
    ArrayList lst;

public:

    bool isEmpty() {
        return lst.isEmpty();
    }

    void push(int item) {
        lst.insertLast(item);
    }

    int pop() {
        return lst.deleteLast();
    }

    int size() {
        return lst.size();
    }

    int top() {
        return lst.getLast();
    }
};


class Queue {
private:
    ArrayList lst;

public:

    bool isEmpty() {
        return lst.isEmpty();
    }

    void enqueue(int item) {
        lst.insertLast(item);
    }

    int dequeue() {
        return lst.deleteFirst();
    }

    int peek() {
        return lst.getFirst();
    }

    int front() {
        return peek();
    }

    int size() {
        return lst.size();
    }
};
int main() {
    ArrayList lst;

    lst.insertFirst(20);
    lst.insertFirst(10);
    lst.insertLast(30);
    lst.print();

    return 0;
}