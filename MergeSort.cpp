#include <iostream>
#include <limits.h>

using namespace std;


void merge(int A[], int start, int mid, int end){
    
    int p = start; // left sublist starting index
    int q = mid + 1; // right sublist starting index
    int c[end - start +1]; // merged array
    int k = 0;
    
    for (int i = start; i <=end; i++) {
        
        if (p > mid){
            c[k] = A[q];
            k++;
            q++;
        }else if (q > end){
            c[k] = A[p];
            k++;
            p++;
        }else if (A[p] < A[q]){
            c[k] = A[p];
            k++;
            p++;
        }else{
            c[k] = A[q];
            k++;
            q++;
        }
        
    }
    
    // Copy C to A
    for(int i = 0; i<k ; i++){
        A[start] = c[i];
        start++;
    }
}


void mergeSort(int A[], int start, int end) {
    
    if (start < end) {
        int mid = (start + end)/2;
        mergeSort(A,start,mid);
        mergeSort(A,mid+1,end);
        merge(A,start,mid,end);
    }
    
}


int main(){
    
    int N = 10;
    int A [ 10 ] = {100,50,43,200,543,10,87,56,98,34};
    
    
    cout<<"\nBefore sort\n";
    for (int i=0;i<N;i++) {
        cout<<A[i]<<" ";
    }
    
    
    mergeSort(A,0,N-1);
    cout<<"\nAfter sort\n";
    for (int i=0;i<N;i++) {
        cout<<A[i]<<" ";
    }
    
    
    return 0;
}
