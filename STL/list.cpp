//list is also a container same as vector but it gives us front operation as well
// if we want to insert anyting in front of vector we need to use v.insert() insert take so much time that why we use list

#include<bits/stdc++.h>
using namespace space;

int main(){
    list<int> ls;
    ls.push_back(2) ; //{2}
    ls.emplace_back(4); //{2,4}
    ls.push_front(5); //{5,2,4};
    ls.empalce_front() ; {2,4}
}