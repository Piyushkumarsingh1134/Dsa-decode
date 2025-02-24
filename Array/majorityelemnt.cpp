#include <iostream>
#include <map>

using namespace std;

int main() {
    int arr[] = {1, 2, 1, 3, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    for (auto it : mp) {
        if (it.second > (n / 3)) {
            cout << it.first << " ";
        }
    }

    return 0;
}