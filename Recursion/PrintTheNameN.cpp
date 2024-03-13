#include<bits/stdc++.h>
using namespace std;

void PrintNameNTimes(int i, int n) {
    if(i>n) return ;

    cout<<"Jaykishan"<<endl;
    PrintNameNTimes(i+1, n);
}

int main() {

    int n;
    cin>>n;

    PrintNameNTimes(1, n);
    
}