#include <iostream>
#include <limits.h>

using namespace std;





void insertionSort(int A[],int N){
    
    for(int i = 1; i < N ; i++) {
        
        int key = A[i];
        int j = i-1;
        
        while (j >= 0 && key < A[j]) {
            A[j + 1] = A[j];
            j--;
        }
        
        A[j+1] = key;
    }
}


int main(){

    int N = 6;
       int A[6] = {49,54,24,76,87,29};
       
       cout<<"\nBefore sort\n";
       for (int i=0;i<N;i++) {
           cout<<A[i]<<" ";
       }
       
       
       insertionSort(A,N);
       cout<<"\nAfter sort\n";
       for (int i=0;i<N;i++) {
           cout<<A[i]<<" ";
       }
    
   
    
    
    return 0;
}
