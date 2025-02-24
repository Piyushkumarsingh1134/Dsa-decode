#include<iostream>
using namespace std;

// class Student{
//     public:
//     string name;
//     int age;
// };
// int main(){
//    Student  s;
//    s.name = "John";
//    s.age = 20;
//    cout<<s.name;

// }



//accesign the public mmodifier


// class Student{
   
//     string name;
//     int age;
//     public:
//     void setname(string n){
//         name=n;
//     }
//     void getname(){
//         cout<<name;
//     }
// };
// int main(){
//    Student  s;
//    s.setname("piyush");
//    s.getname();

// }
//pading concenpt

// class a{
//     int b;
// };
// int main(){
//     a obj;
//     cout<<sizeof(obj);
// }




class Student {
public:
    string name;
    int age;
};

int main() {
    Student *s = new Student;
    s->name = "piyush";
    cout << s->name << endl;

   

    return 0;
}
