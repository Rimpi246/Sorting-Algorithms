// Best Case- when partitioning is always done in the middle. O(n log n)
// Worst Case- when partitioning is done at any end. O(n^2)
// Average Case- O(n log n)
#include <bits/stdc++.h>
using namespace std;

int partition(int A[], int l, int h){
    int pivot=A[l];
    int i=l, j=h;
    do{
        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);
        if(i<j)swap(A[i], A[j]);
    }while(i<j);
    swap(A[l], A[j]);
    return j;
}

void QuickSort(int A[], int l, int h){
    int j;
    if(l<h){
        j=partition(A, l, h);
        QuickSort(A, l, j);
        QuickSort(A, j+1, h);
    }
}

int main()
{
    int A[]={11,13,7,12,16,9,24,5,10,3,INT_MAX},n=11;
    
    QuickSort(A, 0, n-1);
    
    for(int i=0; i<n-1; i++){
        cout<<A[i]<<" ";
    }

    return 0;
}
