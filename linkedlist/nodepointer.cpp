#include<iostream>
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

void display(node* a) {
    node* temp = a;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void displayrecursion(node* a) {
     node* temp = a;
    if (temp == NULL) return;
    cout << temp->val << " ";
    displayrecursion(temp->next);
}

int size(node* head) {
    int n = 0;
    node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        n++;
    }
    return n;
}

void insertathead(node* val){
    node* temp=new node()
}
int main() {
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(10);
    node* d = new node(300);
    a->next = b;
    b->next = c;
    c->next = d;

    cout << "Iterative Display: ";
    display(a);

    cout << "Recursive Display: ";
    displayrecursion(a);

    cout << "Size of the list: " << size(a) << endl;

    // Don't forget to free the allocated memory
   

    return 0;
}
