#include<bits/stdc++.h>
using namespace std;

bool binary_search(int arr[], int n, int target) {
    int start=0;
    int end = n-1;
    while (start<=end)
    {
    int mid = (start + (start-end))/2;
        if(arr[mid] == target) {
            return true;
        }
        else if(target< arr[mid]) {
            end = mid-1;
        }
        else if(target> arr[mid]) {
            start = mid+1;
        }
        
    }
    return false;
}

int main() {
    int n;
    cout<<"Enter the number of element you want in array"<<endl;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int target; 
    cout<<"Enter the target value"<<endl;
    cin>>target;
    
    if(binary_search(arr, n , target)) {
        cout<<"Element found";
    }
    else {
        cout<<"Element Not found";
    }
    
}

‌‌‍//𝗿𝗲𝗰𝘂𝗿𝘀𝗶𝗼𝗻 𝗺𝗲𝘁𝗵𝗼𝗱
​⁡
// int bn(vector<int> &nums, int start, int end, int target) {
    
//     if(start>end){
//         return -1;
//     }
//     int mid = start + (end-start)/2;
//     if(target== nums[mid]){
//         return mid;
//     }
//     else if(target<arr[mid]) {
//         bn(nums, start, mid-1, target)
//     }
//     else {
//         bn(nums, mid+1, end, target)
//     }
    
// }


// int search(vector<int> &nums, int target) {
  
//   return bn(nums, 0, nums.size()-1, target)

// }