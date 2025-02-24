#include<iostream>
#include<vector>
#include<vector>
#include<queue>

using namespace std;
 
 int main(){
    priority_queue<int,vector<int >,greater<int   >>pq;
      int arr[]={6,5,34,54,23,23,52,42};
      int k=3;

      int n=sizeof(arr)/4;
      vector<int>ans;
      for(int i=0; i<n; i++){
        pq.push(arr[i]);
        if(pq.size()>k){
           ans.push_back(pq.top());
           pq.pop();
        }
      }
      while (pq.size()>0)
      {
      ans.push_back(pq.top());
           pq.pop();
      }
      

 }