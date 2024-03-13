#include<bits/stdc++.h>
using namespace std;

void PrintFromNto1(int n, int i) {
    if(n==i) return ;

    cout<<n<<" ";
    PrintFromNto1(n-1, i);
}


int main() {
    int n;
    cin>>n;
    
    PrintFromNto1(n, 0);

}