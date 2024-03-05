#include<bits/stdc++.h>
using namespace std;

bool binarySearch (int arr[], int size, int target) {
    int start=0;
    int end= size-1;
    int mid = start + (end-start)/2;
    
    while(start<=end){
        if(target == arr[mid]){
          return 1;
        }

        else if(target>arr[mid]){
            start = mid+1;
        }
        else{
            end= mid-1;
        }
        mid = start + (end-start)/2;
    }

    return -1;
}

int main() {

    int arr[]= {10,20,30,40,50,80,100};
    int size =7;
    int target =20;

    int indexofTarget = binarySearch(arr,size, target);

    if(indexofTarget==-1){
        cout<<"target not found"<<endl;

    }
    else{
        cout<<"target found "<<indexofTarget << " index "<<endl;
    }
    return 0;

}