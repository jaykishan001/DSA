#include<bits/stdc++.h>
using namespace std;

class Parent {
    public:
    char name;
    int age;
    int weight;

};

class Child: public Parent {
    public: 
    string color;

    void sleep () {
        cout<<"Hello Male is Sleeping"<<endl;
    }
};


int main() {

    Child david;

    david.age = 20;
    cout<<david.age<<endl;
    Parent papa;
    cout<<papa.age; 

}