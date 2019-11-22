
#include <iostream>

using namespace std;

// Iterative
int binarySearch(unsigned int A[],int searchItem,unsigned int left,unsigned int right){
 
     while ( left <= right ) {
         
         unsigned int mid = (left + right) / 2;
         
         if (searchItem > A[mid]) {
             left = mid + 1;
         }
         
         if (searchItem < A[mid]) {
             right = mid - 1;
         }
         
         if(searchItem == A[mid]){
             return  mid;
         }
     }
    
    return -1;

}

// Recursive
int binarySearchRecursive(unsigned int A[],int searchItem,unsigned int left,unsigned int right){
 
      if ( left <= right ) {
         
         unsigned int mid = (left + right) / 2;
         
         if (searchItem > A[mid]) {
             left = mid + 1;
              return binarySearchRecursive(A,searchItem,left,right);
         }
         
         if (searchItem < A[mid]) {
             right = mid - 1;
             return binarySearchRecursive(A,searchItem,left,right);
         }
         
         if(searchItem == A[mid]){
             return  mid;
         }
     }
    
    return -1;

}


int main(int argc, const char * argv[]) {
    
    
    unsigned int A[] = {100,200,300,400,500,600,700,800,900,1000,1100};
    
    int search = 800;
    int N = 11;
    
    int result_87 = binarySearchRecursive(A,search,0,N-1);
    if(result_87 != -1){
        cout<<"Item "<<search<<" Found At Location "<<result_87<<endl;
    }
    
    search = 555;
    int result_555 = binarySearchRecursive(A,search,0,N-1);
    if(result_555 == -1){
        cout<<"Item "<<search<<" Not Found."<<endl;
    }


    return 0;
    
}