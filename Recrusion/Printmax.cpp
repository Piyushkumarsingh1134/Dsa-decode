#include <iostream>
using namespace std;

void f(int* arr, int idx, int n) {
    if (idx == n) return; // base case should check for idx == n, not n-1
    cout << arr[idx];
    f(arr, idx + 1, n);
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    f(arr, 0, n);
    return 0;
}