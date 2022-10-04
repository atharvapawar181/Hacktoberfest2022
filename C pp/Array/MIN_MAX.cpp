#include<iostream>
using namespace std;


int getMin(int arr[], int n){
  int min = INT8_MAX;

  for (int i = 0; i < n; i++)
  {
    if (arr[i]<min)
    {
      min = arr[i];
    }
  }
  return min;
}
int getMax(int arr[], int n){
  int max = INT8_MIN;

  for (int i = 0; i < n; i++)
  {
    if (arr[i]>max)
    {
      max = arr[i];
    }
  }
  return max;
}

int main(){
  int size;
  cin>>size;

  int arr[100];
  int i;
  for (int i = 0; i < size; i++)
  {
    cin>>arr[i];
  }
  for (int i = 0; i < size; i++){
  cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<"MAX: "<<getMax(arr, size)<<endl;
  cout<<"MIX: "<<getMin(arr, size)<<endl;

  return 0;
}
