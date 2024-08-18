#include<iostream>
using namespace std;

class books {
public:
    char name[50]; // Use an array to store the name of the book
    int price;
    int noofpages;

    int countbooks(int p) {
        if (price < p) 
            return 1;
        else 
            return -1;
    }

    bool isbookpresent(char book) {
        if (name[0] == book) // Check the first character of name
            return true;
        else 
            return false;
    }
};

int main() {
    books harry;
     // Use strcpy to assign a string to name
    harry.price = 100;
    harry.noofpages = 1000;
    cout << harry.countbooks(1100);

    return 0;
}
