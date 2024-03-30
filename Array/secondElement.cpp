#include<bits/stdc++.h>
using namespace std;

int searchSecond(vector<int> arr, int size) {
    int max = INT_MIN;

    sort(arr.begin(), arr.end());
    int x;
    for(auto x : arr) {
        if(arr[x]>max){
            max= arr[x];
        }
    }
        return arr[x-1];
}

int main (){
    vector<int> arr = {3,5,4,2};
    int size = 4;

    searchSecond(arr, size);


}