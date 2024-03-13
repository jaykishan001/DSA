#include<bits/stdc++.h>
using namespace std;

void increase(int i, int n ) {
    
    if(i>n) return;
        cout<<i<< " ";
        increase(i+1, n);
}

int main() {

    int n;
    cin>>n;

    increase(1, n);
}