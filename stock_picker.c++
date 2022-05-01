#include <bits/stdc++.h>
using namespace std;

int StockPicker(int arr[], int arrLength) {
  int res = 0 ;
  int localMin = INT_MAX;


  for ( int i = 0 ; i < arrLength; i++){
    if ( localMin > arr[i]){ //min
      localMin = arr[i];
    }
    if ( arr[i] -  localMin > res){
      res = arr[i] - localMin;
    }
  }
  if (res == 0)
      res = -1;

  // code goes here  
  return res;

}

int main(void) { 
   
  // keep this function call here
  int A[] = coderbyteInternalStdinFunction(stdin);
  int arrLength = sizeof(A) / sizeof(*A);
  cout << StockPicker(A, arrLength);
  return 0;
}
