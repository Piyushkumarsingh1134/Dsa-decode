#include<iostream>
using namespace std;
class Player {
private:                   
    int health;
    int age;
    int score;
    bool alive;
public:                                   
    int getHealth() const {
        return health;
    }

    int getAge() const {
        return age;
    }

    int getScore() const {
        return score;
    }

    bool isAlive() const {
        return alive;
    }

    void setHealth(int health) {
        this ->health = health;
    }
           
    void setAge(int age) {
        this->age = age;
    }

    void setScore(int score) {
        this->score = score;
    }

    void setIsAlive(bool alive) {
        this->alive = alive;
    }
};                         

int addscore(Player a, Player b) {
    return a.getScore() + b.getScore();
}

Player getMaxScorePlayer(Player a, Player b) {
    if (a.getScore() > b.getScore())
        return a;
    else
        return b;
}

int main() {
    Player harsh;
    Player ragav;
    Player *piyu=new Player;
    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setIsAlive(true);
    harsh.setHealth(70);
    ragav.setAge(21);
    ragav.setScore(100);
    ragav.setIsAlive(true);
    ragav.setHealth(70);
    cout << addscore(harsh, ragav) << endl;
    Player sanket = getMaxScorePlayer(harsh, ragav);
    cout << sanket.getScore() << endl;
    return 0;
}                          
  