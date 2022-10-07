#include <bits/stdc++.h>
using namespace std;

class quickSort
{
public:

    void QuickSort(int arr[], int low, int high)
    {
        if (low < high) {

            int pivot = partition(arr, low, high) ;
            QuickSort(arr, low, pivot - 1)  ;
            QuickSort(arr, pivot + 1, high)  ;
        }
    }


    int partition (int arr[], int low, int high)
    {
        int pivot = arr[low]  ;
        int i = low ;
        int j = high ;

        while (i < j) {

            while (arr[i] <= pivot && i <= high - 1) {
                i++  ;
            }

            while (arr[j] > pivot && j >= low) {
                j-- ;
            }

            if (i < j)
                swap(arr[i], arr[j])  ;
        }

        swap(arr[j], arr[low]) ;

        return j ;
    }
};

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " " ;
    }
    cout<<endl;
}

int main()
{

    int arr[] = {4, 6, 2, 5, 7, 8, 1, 3}  ;
    int n = sizeof(arr) / sizeof(arr[0])  ;
    Solution obj;
    cout<<"Before Quick Sort: "<<endl;
    printArray(arr,n);
    obj.QuickSort(arr, 0, n - 1);
    cout << "After Quick Sort: "<<endl;
    printArray(arr, n);
    return 0;
}
