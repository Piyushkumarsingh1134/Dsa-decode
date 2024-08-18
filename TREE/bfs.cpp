#include<iostream>
using namespace std;

class node {
    public:
    int val;
    node* left;
    node* right;
    node(int val) {
        this->right = NULL;
        this->left = nullptr;
        this->val = val;
    }
};
 int levels(node* root){
    if(root==NULL)return 0;
    return 1+max(levels(root->left),levels(root->right));
 }
void nthlevel(node* root,int curr,int level){
    if(root==NULL)return;
    if(curr==level) cout<<root->val;
     nthlevel(root->left,curr+1,level);
      nthlevel(root->right,curr+1,level);

}
void levelorder(node* root){
     int n=levels(root);
     for(int i=1; i<n; i++){
        nthlevel(root,1,i);

     }
}

int main() {
    node* a = new node(1);
    node* b = new node(2);
    node* c = new node(4);
    node* d = new node(5);
    node* e = new node(6);
    node* f = new node(7);
    node* g = new node(8);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
  


    return 0;
}