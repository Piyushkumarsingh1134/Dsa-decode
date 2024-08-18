#include<iostream>
using namespace std;
#include<unordered_set>
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    for(int x:s){
        cout<<x<<"";
    }
    
}
 