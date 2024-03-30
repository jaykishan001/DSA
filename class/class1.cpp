#include<bits/stdc++.h>
using namespace std;

class Hero {
    public:
    int health;
    char level;
    Hero() {
        cout<<"Hui hui";
    }

    Hero (int health,  char level) {
        this -> health = health;
        this -> level = level;
    }

};


int main(){

Hero David(1, 'A');
Hero ch;
cout<<ch.health ;

cout<<David.health<<endl;
cout<<David.level<<endl;


}