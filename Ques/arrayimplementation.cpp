#include <iostream>
using namespace std;

class Queue {
public:
    int f;
    int b;
    int arr[5];
    
    Queue() { // Corrected constructor
        f = 0;
        b = 0;
    }

    void push(int val) {
        if (b == 5) { // Queue size is 5
            cout << "queue full" << endl;
            return;
        }
        arr[b] = val;
        b++;
    }

    void pop() {
        if (f == b) { // Checking if the queue is empty
            cout << "queue is empty" << endl;
            return;
        }
        f++;
    }

    int front() {
        if (f == b) { // Checking if the queue is empty
            cout << "queue is empty" << endl;
            return -1;
        }
        return arr[f];
    }

    int size() {
        return b - f;
    }

    bool empty() {
        return f == b;
    }

    void display() {
        for (int i = f; i < b; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60); // This should trigger "queue full"
    q.display();
    return 0;
}
