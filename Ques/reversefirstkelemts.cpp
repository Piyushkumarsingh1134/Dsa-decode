#include <iostream>
#include<stack>
#include<queue>
using namespace std;
void reversek(int k, queue<int>&q){
    stack<int>st;
    for(int i=0; i<=k; i++){
    st.push(q.front());
    q.pop();
    }
    while( st.size()>==0){
        q.push(st.pop());
         st.pop();
    }
    int n=q.size();
    for(int i=0; i<=n-k; i++){
     q.push(q.front());
     
    q.pop();
    }
}
int main(){
    int k=2;
    reversek(k,q);

}