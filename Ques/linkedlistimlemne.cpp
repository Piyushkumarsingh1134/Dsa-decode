#include <iostream>
using namespace std;

class node {
public:
    int val;
    node* next;
    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class Queue {
public:
    node* head;
    node* tail;
    int size;

    Queue() {
        head = tail = NULL;
        size = 0;
    }

    void insertatend(int val) {
        node* temp = new node(val);
        if (size == 0)
            head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void deleteathead() {
        if (size == 0) return;
        node* temp = head;
        head = head->next;
        delete temp;
        size--;
    }

    int front() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return head->val;
    }

    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.insertatend(10);
    q.insertatend(20);
    q.display();
    q.insertatend(25);
    q.display();
    cout << q.front() << endl;

    q.deleteathead();
    q.display();

    cout << "hello" << endl;
    return 0;
}

