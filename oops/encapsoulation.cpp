#include<iostream>
using namespace std;
class Student {
private:
    int score;//datamember
    int health;
    char name[20];
    public:
    void setScore(int s){//setter
      score=s;
    }
    void showhhealth(){//member funvtion
        cout<<"health is"<<health;
    }
    int getscore(){
        return score;
    }
};
int main(){
 Student karan;
//  karan.score=90;
//  karan. health=60;
// //  karan .name="name";
//  cout<<karan.score<<endl;
//  karan.showhhealth();
karan.setScore(10);
cout<<karan.getscore();
}