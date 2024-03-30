#include<bits/stdc++.h>
using namespace std;

void PrintFromNto1(int n, int i) {
    if(i<1) return ;

    cout<<i<<" ";
    PrintFromNto1(n, i-1);
}


int main() {
    int n;
    cin>>n;
    
    PrintFromNto1(n, n);

}