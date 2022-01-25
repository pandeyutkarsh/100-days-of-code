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
 int index = 0;
    for(int i=0;i<size;i++){
        cout<<"Round - "<<i+1<<endl;
        cout<<"Input :";
        print(arr);
        index = i;
        for(int j=i+1;j<size;j++){

          if(arr[index] > arr[j]){
              index = j;
          }

        }
        swap(arr[index],arr[i]);
        cout<<"Output :";
        print(arr);
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
