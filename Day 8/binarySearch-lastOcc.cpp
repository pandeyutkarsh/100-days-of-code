#include <bits/stdc++.h>
using namespace std;



int main() {
  vector<int> arr = {1,2,2,2,3,4,5};
  
int s = 0;
int e = arr.size();
int mid = (s+e)/2;
int ans = 0;
int key = 2;


while(s<=e){

  if(key == arr[mid]){
      ans = mid;
      break;
  }

  if(arr[mid] > key){
      e = mid-1;
  }else{
      s = mid + 1;
  }

 mid = (s+e)/2;

}

cout<<ans;

} 
