#include <iostream>
using namespace std;

class bike {
public:
    int tyresize;
    int enginesize;
     static int noofbike;
 void setnoofbike(int no){
    noofbike=no;
    noofbike++;
 }
    //default constructor 
    bike(int tyresize, int enginesize) {
        this->tyresize = tyresize;
        this->enginesize = enginesize;
    }
    //destructor
    // ~bike(){
    //     cout<<"destructor call hua";
    // }
};
 void print(){
    static int b=10;
    cout<<b;
    b++;
 }
int main() {
    // bike tvs(124, 150); // object creation
    //  cout<<tvs.enginesize<<endl;
    // return 0;
     print();
      print();
      bike::noofbike=10;

}
