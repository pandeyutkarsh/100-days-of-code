#include "bits/stdc++.h"
using namespace std;

void print(vector<int> arr){
    cout<<endl;
    for(int i=0;i<arr.size();i++){
     cout<<arr[i]<<" ";
    }cout<<endl;
}

void selectionSort(vector<int>& arr){

int size = arr.size();
 
    for(int i=0;i<size;i++){
        cout<<"Round :"<<i<<"\nInput :"<<endl;  
        print(arr);
        cout<<"\nOutput :\n";
        for(int j=0;j<size-1;j++){
          if(arr[j] > arr[j+1]){
              swap(arr[i],arr[j]);
          }
          print(arr);
        }
    }

}



int main(){
    vector<int> arr = {1,5,6,2,3,4,2,3,8,9,7};
    cout<<"Original array -"<<endl;
    print(arr);
    selectionSort(arr);
    cout<<"\nSorted array -";
    print(arr);
}
