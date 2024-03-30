#include<bits/stdc++.h>

using namespace std;

int first_lower_bound(int arr[], int n, int target) {
    int ans = n;
    int low = 0;
    int high =n-1;
    int mid = low + (high-low)/2;
    while(low <= high) {

        if(arr[mid]== target) {
            return mid;
        }
        else if(arr[mid]>=target) {
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
        mid = low + (high-low)/2;

    }
    return ans;

}


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target";
    cin>>target;
    int answer = first_lower_bound(arr, n, target);
    cout<<answer;
    
}