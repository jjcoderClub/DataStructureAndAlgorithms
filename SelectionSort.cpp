#include <iostream>
#include<vector>
#include<stack>

using namespace std;




// Swap item at index x and at index y
void swapItem(int A[],int x, int y){
    int temp = A[x];
    A[x] = A[y];
    A[y] = temp;
}

void selectionSort(int A[],int N){
    
    for(int i = 0; i < N-1; i++){ // swap
        int minIndex = i;
        for(int j = i + 1; j < N; j++){ // compare
            if(A[j] < A[minIndex]){
                minIndex = j;
            }
        }
        
        if (minIndex != i) { // Avoid unnecessary swap
             swapItem(A,i,minIndex);
        }
    
    }
}





int main(){

       int N = 6;
       int A[6] = {49,54,30,76,87,29};
       
       cout<<"\nBefore sort\n";
       for (int i=0;i<N;i++) {
           cout<<A[i]<<" ";
       }
       
       
       selectionSort(A,N);
       cout<<"\nAfter sort\n";
       for (int i=0;i<N;i++) {
           cout<<A[i]<<" ";
       }
      
    
    
    return 0;
}
