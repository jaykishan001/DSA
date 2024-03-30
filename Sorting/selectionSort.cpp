#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
    
    for(int i=0; i<=n-2; i++) {
        int min =i;
        for(int j=i; j<=n-1; j++) {
            if(arr[min]>arr[j]) {
                 min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
}


int main() {
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<=n-1; i++) {
        cin>>arr[i];
    }
 
    selection_sort(arr, n);
  
    for(int i=0; i<=n-1; i++) {
        cout<<arr[i]<<" ";
    }
}