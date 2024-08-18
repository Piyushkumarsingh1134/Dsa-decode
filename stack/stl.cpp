#include<iostream>
#include<stack>
using namespace std;
int main(){
   stack<int>st;
   cout<<st.size();
   st.push(10);
   st.push(30);
   st.push(40);
   st.push(60);


  cout<<st.size();
  cout<<" " <<endl;
  cout<<st.top();
  stack<int> temp;
  while(st.size()>0){
    cout<<st.top()<<" ";
    int x=st.top();
     st.pop();
     temp.push(x);
     
  }
  while(temp.size()>0){
     int x=temp.top();
     temp.pop();
     st.push(x);
  }
}