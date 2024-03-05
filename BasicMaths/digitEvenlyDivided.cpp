#include<bits/stdc++.h>
using namespace std; 

int main() {
    int n;
    int temp = n;
    cin>>n;
    int sum=0;

    while(n>0){
        int lastdigit = n%10;
        if(temp%lastdigit==0){
            sum = sum+1;
        }
        n = n/10;
    }
    cout<<sum<<endl;
}