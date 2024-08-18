#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class Deque {
public:
    Node* head;
    Node* tail;
    int size;

    Deque() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    void insertFront(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }

    void insertBack(int val) {
        Node* temp = new Node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void deleteFront() {
        if (size == 0) {
            cout << "Deque is empty" << endl;
            return;
        }
        Node* temp = head;
        if (head == tail) {
            head = tail = nullptr;
        } else {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
        size--;
    }

    void deleteBack() {
        if (size == 0) {
            cout << "Deque is empty" << endl;
            return;
        }
        Node* temp = tail;
        if (head == tail) {
            head = tail = nullptr;
        } else {
            tail = tail->prev;
            tail->next = nullptr;
        }
        delete temp;
        size--;
    }

    int getFront() {
        if (size == 0) {
            cout << "Deque is empty" << endl;
            return -1;
        }
        return head->val;
    }

    int getBack() {
        if (size == 0) {
            cout << "Deque is empty" << endl;
            return -1;
        }
        return tail->val;
    }

    bool isEmpty() {
        return size == 0;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Deque dq;

    dq.insertFront(10);
    dq.insertBack(20);
    dq.insertFront(30);
    dq.insertBack(40);

    dq.display();

    cout << "Front: " << dq.getFront() << endl;
    cout << "Back: " << dq.getBack() << endl;

    dq.deleteFront();
    dq.display();

    dq.deleteBack();
    dq.display();

    cout << "Is empty: " << (dq.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
