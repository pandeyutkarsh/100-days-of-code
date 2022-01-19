#include "bits/stdc++.h"
using namespace std;


bool binarySearch(vector<int> arr,int key){
    int s = 0;
    int e = arr.size();
    int mid = (s+e)/2;
    while(s<e){

        if(arr[mid] == key){
            return true;
        }else if(key < arr[mid]){
            e = mid-1;
        }else{
            s = mid+1;
        }

        mid = (s+e)/2;
        cout<<mid<<endl;
    }

    return false;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};

    cout<<binarySearch(arr,98);
} 
