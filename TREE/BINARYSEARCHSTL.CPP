#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->right=NULL;
        this->left=nullptr;
        this->val=val;

    }
};
void display(node* root){
    if(root=NULL)return;
    cout<<root->val;
     display(root->left);
      display(root->right);

}
int main(){
    node* a=new node(1);
    node* b=new node(2);
    node* c=new node(4);
    node* d=new node(5);
    node* e=new node(6);
    node* f=new node(7);
    node* g=new node(8);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;

}
