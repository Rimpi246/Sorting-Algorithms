// worst case time complexity- O(n^2) (when in decreasing order)
// average case time complexity- O(n^2)
// best case time complexity- O(n) (when in ascending order)
// space complexity- O(1)
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int j=i-1;
        int x=arr[i];
        while(j>-1 && arr[j]>x){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
}
int main()
{
    int arr[]={5,1,6,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
