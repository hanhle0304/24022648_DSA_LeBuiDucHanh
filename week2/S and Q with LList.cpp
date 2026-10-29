#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;
    int count;

public:
    LinkedList() {
        head = NULL;
        count = 0;
    }

    void insertFirst(int x) {
        Node* newNode = new Node;
        newNode->data = x;
        newNode->next = head;
        head = newNode;
        count++;
    }

    void insertLast(int x) {
        Node* newNode = new Node;
        newNode->data = x;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* cur = head;
            while (cur->next != NULL) {
                cur = cur->next;
            }
            cur->next = newNode;
        }
        count++;
    }

    int deleteFirst() {
        if (head == NULL) {
            return -1;
        }

        Node* temp = head;
        int value = temp->data;
        head = head->next;
        delete temp;
        count--;

        return value;
    }

    int deleteLast() {
        if (head == NULL) {
            return -1;
        }

        if (head->next == NULL) {
            int value = head->data;
            delete head;
            head = NULL;
            count--;
            return value;
        }

        Node* cur = head;
        while (cur->next->next != NULL) {
            cur = cur->next;
        }

        int value = cur->next->data;
        delete cur->next;
        cur->next = NULL;
        count--;

        return value;
    }

    int getFirst() {
        if (head == NULL) {
            return -1;
        }
        return head->data;
    }

    int size() {
        return count;
    }

    bool isEmpty() {
        return head == NULL;
    }

    void print() {
        Node* cur = head;
        while (cur != NULL) {
            cout << cur->data << " -> ";
            cur = cur->next;
        }
        cout << "NULL" << endl;
    }

    ~LinkedList() {
        while (head != NULL) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

class Stack {
private:
    LinkedList lls;

public:
    bool isEmpty() {
        return lls.isEmpty();
    }

    void push(int item) {
       lls.insertFirst(item); 
    }

    int pop() {
        return lls.deleteFirst();
    }

    int size() {
        return lls.size();
    }

    int top() {
        return lls.getFirst();
    }
};

class Queue {
private:
    LinkedList lls;

public:
    bool isEmpty() { 
        return lls.isEmpty();
    }

    void enqueue(int item) {
        lls.insertLast(item);
    }

    int dequeue() {
        return lls.deleteFirst();
    }

    int peek() { 
        return lls.getFirst();
    }

    int size() { 
        return lls.size(); }
    };
    
int main() {

    return 0;
}