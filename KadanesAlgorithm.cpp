#include <iostream>
#include <limits.h>

using namespace std;





// Kadane's algo
int subArrayMaximum(int A[], int N){
    
    int maxSum = INT_MIN;
    int tempSum = 0;
    
    for (int i=0;i<N;i++) {
        tempSum = max(A[i], tempSum + A[i]);
        maxSum = max(maxSum, tempSum);
    }
    return maxSum;
}


int main(){

     
    int N = 8;
    int A[8] = {-2,-3,4,-1,-2,1,5,-3};
    
    cout<<subArrayMaximum(A,N)<<endl;
    
    
    
    return 0;
}
