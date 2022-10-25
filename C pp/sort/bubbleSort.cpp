#include <iostream>
using namespace std;
 
void bubbleSort(int arr[], int n)
{
   for (int i = 0; i < n-1; i++)
   {  
       bool swapped = false;
       // last i elements are already at the correct position
       for (int j = 0; j < n-i-1; j++)
       {
           if (arr[j] > arr[j+1])
           {
               swap(arr[j], arr[j+1]);
               swapped = true;
           }
       }
       // If no swapping happened in the current pass, then break
       if (swapped == false)
           break;
   }
}
 
void printArray(int arr[], int n)
{
   for (int i = 0; i < n; i++)
       cout << arr[i] << " ";
   cout << "\n";
}
 
int main()
{
  int n;
 cin>>n;
 int*arr=new int[n];
  for(int i=0;i<n;i++)
  {
   cin>>arr[i];
  }
   cout<<"Given Array: ";
   printArray(arr, n);
  
   bubbleSort(arr, n);
  
   cout<<"Sorted Array: ";
   printArray(arr, n);
  
   return 0;
}
