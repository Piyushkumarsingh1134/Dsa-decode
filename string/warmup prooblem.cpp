#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    
    for(int i=0; i<s.length(); i++){
        if(i==0){
            (if (/* condition */)
            {
                /* code */
            }
            [i]!=s[i+1])
        }
        if(s[i]!=s[i+1] && s[i]!=s[i-1])count++
    }
    return 0;
}