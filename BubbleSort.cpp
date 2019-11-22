#include<iostream>

using namespace std;



void swap(int A[], int x, int y){
    int temp = A[x];
    A[x] = A[y];
    A[y] = temp;
}


void bubbleSort(int A[],int N){
    
    for (int i = 0; i < N-1; i++) {   // Number of steps
        for (int j = 0; j < N-i-1;j++) { // Number of compare
            if (A[j] > A[j+1]) {
                swap(A,j,j+1);
            }
        }
    }
    
}

// Improved
void improvedBubbleSort(int A[],int N){
    
    for (int i = 0; i < N-1; i++) {   // Number of steps
        bool isSwaped = false;
        for (int j = 0; j < N-i-1;j++) { // Number of compare
            if (A[j] > A[j+1]) {
                swap(A,j,j+1);
                isSwaped = true;
            }
        }
        if (isSwaped == false) {
            break;
        }
    }
    
}


int main(){
    
    int N = 6;
    int A[6] = {49,54,24,76,87,29};
    
    cout<<"\nBefore sort\n";
    for (int i=0;i<N;i++) {
        cout<<A[i]<<" ";
    }
    
    
    improvedBubbleSort(A,N);
    cout<<"\nAfter sort\n";
    for (int i=0;i<N;i++) {
        cout<<A[i]<<" ";
    }
   
    
    return 0;
}
