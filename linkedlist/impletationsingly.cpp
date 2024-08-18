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

class linkedlist {
public:
    node* head;
    node* tail;
    int size;
    linkedlist() {
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
    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void insertathead(int val){
        node *temp=new node(val);
        if(size==0)
            head=tail=temp;
        else 
            temp->next=head;
        head=temp;
        size++;
    }
    void insertat(int idx, int val){
        if(idx<0 || idx>size)
        {
            cout<<"invalid index";
            return;
        }    
        if(idx==0){
            insertathead(val);
            return;
        }
        if(idx==size){
            insertatend(val);
            return;
        }
        else{
            node* temp=head;
            for(int i=1; i<=idx-1; i++){
                temp=temp->next;
            }
            node* t=new node(val);
            t->next=temp->next;
            temp->next=t;
            size++;
        }   
    }
  int getatidx(int idx){
    if(idx < 0 || idx >= size) return -1; // Return -1 for out-of-bounds indices
    if(idx == 0) return head->val;
    if(idx == size - 1) return tail->val;
    else {
        node* temp = head;
        for(int i = 0; i < idx; i++) { // Changed the loop start index to 0
            temp = temp->next;
        }
        return temp->val;
    }
}
 void deleteathead(){
    if(size==0) return;
    head=head->next;
    size--;
 }
  void deleteatail(){
    node* temp=head;
     if(size==0) return;
    while (temp->next!=tail)
    {
      temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    size--;
    
  }   
  void deleteAtidx(int idx){
    if(idx<0 ||idx>=size){
        cout<<"invalid idx";
        return;
    }else if(idx==0) return deleteathead();
      else if(idx==0) return deleteatail();
      else {
        node* temp = head;
        for(int i = 0; i < idx-1; i++) { // Changed the loop start index to 0
            temp = temp->next;
        }
    temp->next=temp->next->next;
    }
  }
    
};

int main() {
    linkedlist ll;

    ll.insertatend(10);
    ll.insertatend(20);
    ll.display();
    ll.insertathead(25);
    ll.display();
   cout<< ll.getatidx(2);

    cout << "hello" << endl;
    return 0;
}

