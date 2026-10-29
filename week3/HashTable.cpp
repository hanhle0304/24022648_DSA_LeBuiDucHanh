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
    
    void deleteValue (int x) {
        if (head == NULL) {
            return;
        }
        
        if (head->data == x) {
            Node* temp = head;
            head = head->next;
            delete temp;
            count --;
            return;
        }
        
        Node* cur = head;
        
        while (cur->next != NULL && cur->next->data != x) {
            cur = cur->next;
        }
        
        if (cur->next == NULL) return;
        
        Node* temp = cur->next;
        cur->next = temp->next;
        delete temp;
        count--;
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

    bool find(int x) {
    Node* cur = head;
    while (cur != NULL) {
        if (cur->data == x) {
            return true;
        }
        cur = cur->next;
    }
    return false;
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

// ham bam fx = x mod 11
class HashTable {
private:
    static const int hash_size = 11;
    LinkedList hash_table[hash_size]; // seperate chaining

    int hashFunction(int key) {
        return key % hash_size;
    }

public:
    void insert(int key, int value) {
        hash_table[hashFunction(key)].insertFirst(value);
    }

    bool search(int key, int value) {
        return hash_table[hashFunction(key)].find(value);
    }

    void remove(int key, int value) {
        return hash_table[hashFunction(key)].deleteValue(value);
    }
    
    void print() {
        for (int i = 0; i < hash_size; i++) {
            cout << i << ": ";
            hash_table[i].print();
        }
    }
};

int main() {

}
    