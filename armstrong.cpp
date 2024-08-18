#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    
    int result = fib(x);
    cout <<  result << endl;

  
    /*
    int original = x;
    int s = 0;
    
    while (x != 0) {
        int y = x % 10;
        s += y * y * y;
        x /= 10;
    }
    
    if (original == s) {
        cout << "Armstrong number" << endl;
    } else {
        cout << "Not an Armstrong number" << endl;
    }
    */
    
    return 0;
}

    
    

