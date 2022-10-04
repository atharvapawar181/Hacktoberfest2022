//Linear search

#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){ 
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      return 1;
    }
    
  }
  return 0;
}

int main(){
  int arr[7] = {-1, 20, 54 ,10, 89, 0, 71};
  
  cout<<"Enter the element u want to Serach: "<<endl;
  int key;
  cin>>key;

  bool found = search(arr, 7, key);
  
  if(found){
    cout<<"Element Found"<<endl;
  }
  else{
    cout<<"Element not found!"<<endl;
  }
return 0;
}
