#include <iostream>
#include <cstddef>
using namespace std;


class node {
public:
    int val;
    node* next;
    node* prev;
    node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void display(node *head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    //   node* a=new node(10);

      node* a=new node(10);
      node* b=new node(20);
      node* c=new node(30);
      node* d=new node(40);
      a->next=b;
      b->next=c;
      c->next=d;
      d->prev=c;
      c->prev=b;
      b->prev=a;
      display(a);



}