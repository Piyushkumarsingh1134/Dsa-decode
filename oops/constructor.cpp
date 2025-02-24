#include <iostream>
using namespace std;

// class bike {
// public:
//     int tyresize;
//     int enginesize;
//      static int noofbike;
//  void setnoofbike(int no){
//     noofbike=no;
//     noofbike++;
//  }
//     //default constructor 
//     bike(int tyresize, int enginesize) {
//         this->tyresize = tyresize;
//         this->enginesize = enginesize;
//     }
//     //destructor
//     // ~bike(){
//     //     cout<<"destructor call hua";
//     // }
// };
//  void print(){
//     static int b=10;
//     cout<<b;
//     b++;
//  }
// int main() {
//     // bike tvs(124, 150); // object creation
//     //  cout<<tvs.enginesize<<endl;
//     // return 0;
//      print();
//       print();
//       bike::noofbike=10;

// }



// class customer{
//     string name;
//      customer(){
//      cout<<"deafult constructor"
//      name="rohti"
//      }
// };



class customer{
    string name;
    int accno;
    int balance;
public:
     customer( string name,int accno, int balance){
     this->name=name;
    this->accno =accno;
      this->balance=balance;
      
     }

     void display(){
        cout<<name<<accno<<balance;
     }

};

int main(){
  
  customer c1("rohti" ,2,1000);
}

