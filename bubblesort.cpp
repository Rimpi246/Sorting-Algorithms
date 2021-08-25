// Worst case time complexity-O(n^2)
// Best case time complexity-O(n)
// https://visualgo.net/en/sorting
#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n){
    int flag;
    for(int i=0; i<n-1; i++){
        flag=0;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        if(flag==0)break;
    }
}
int main()
{
    int arr[]={3,5,27,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

