#include<iostream>
using namespace std;


void printArray(int arr[], int n) {

    for(int i = 0; i<n; i++ ) {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}


int main(){

  int even[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 99};
  int odd[5]= {1 ,2, 3, 4, 5};

  swapAlternate(even, 10);
  printArray(even, 10);


  swapAlternate(odd, 5);
  printArray(odd, 5);

  return 0;
}
