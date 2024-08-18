#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int, string> mp;
    pair<int, string> p;
    p.first = 76;
    p.second = "ragav";
    mp.insert(p);
      mp[86]="puuuid";
    // Output the contents of the map to verify the insertion
    for (auto& elem : mp) {
        cout << elem.first << " => " << elem.second << endl;
    }

    return 0;
}
