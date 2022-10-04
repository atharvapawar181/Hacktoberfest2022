#include<iostream>
using namespace std;

void printArray(int arr[], int size){
  cout<<"Printing the Array"<<endl;
  for (int i = 0; i < size; i++)
  {
   cout<<arr[i] << " ";
  }
  cout<<"Printing done"<<endl;
}

int main(){
  int num[15];
  cout<<"Value at 14 index: " << num[14] << endl;
  //This will print garbage valu as no array given

  int second[3] = {10, 20, 30};
  cout<<"Value at 2 index: " << second[2] << endl;

  int third[15] = {2, 10};
  cout<<"Value at 10 index: " << third[10] << endl;
  // only "0" will get printed as no element at 10

  int forth[15] = {2,10};
  int n = 7;
  for (int i = 0; i < n; i++)
  {
   cout<<forth[i] << " "; 
   //It will print 2 10 0 0 0 0 0 as 7 elements are asked and have only 2, so.....
  }

  int fifth[10] = {1};
  int p = 10;
  cout<<"Printing the Array"<<endl;
  for (int i = 0; i < p; i++)
  {
   cout<<fifth[i] << " ";
  }
  //Print first 1 and other 9 as "0"





  //form funtion calling
  printArray(second, 2);   //2 is size of array which is to be printed

  printArray(third, 2);

  int numSize = sizeof(num)/sizeof(int);  //Size of Array
  cout<<"Size of Array: "<<numSize<< endl;

  int secondSize = *(&second + 1) - second;
  cout<<"Length of Array: "<<secondSize<< endl;

  //initialising array other than int

  char ch[5] = {'a', 's', 'd', 'f', 'g'};
  cout<<"Printing the Array in ch: "<<endl;
  for (int i = 0; i < 5; i++)
  {
   cout<<ch[i] << " ";
  }
  cout<<"Printing done"<<endl;

  double secondDouble[5];
  float secondFloat[5];
  bool secondBool[5];

  cout << endl << " Everything is Fine " << endl << endl;


  return 0;
}
