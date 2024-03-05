#include<bits/stdc++.h>
using namespace std;

bool palidrom(int n) {
    int temp = n;
    
    int reverse = 0;
    while(n!=0){
        int lastdigit = n%10;
        reverse = reverse*10 +lastdigit;
        n=n/10;
    }
    if(temp==reverse){
        return true;
    }
    else{
        return false;
    }

    
}

int main() {
    int n;
    cin>>n;

    if(palidrom(n)){
        cout<<"true"; 
    }
    else{
        cout<<"false";
    }
}