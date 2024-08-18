#include<iostream>
using namespace std;
void reorder(queue<int>&q){
    stack <int>q;
    //pop first half of the stack
    int n=q.size();
    for(int i=1; i<n/2; i++){
        st.push(q.front());
        q.pop(); 
   }
   while(st.size()>0){
    q.push(st.top());
    st.pop();


   }
    for(int i=1; i<n/2; i++){
        st.push(q.front());
        q.pop(); 
   }
   //most interleaved one by one
    while(st.size()>0){
    q.push(st.top());
    q.push(q.front());
    q.pop();


   }
}
int  main(){
    queue<int>q;

}