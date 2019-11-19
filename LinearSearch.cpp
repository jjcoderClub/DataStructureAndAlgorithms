

#include<iostream>


using namespace std;





int performSearch(unsigned int A[],int searchItem,unsigned int N){
 
    for(unsigned int i = 0; i < N ; i++){
        
        unsigned int item = A[ i ];
        
        if ( item == searchItem ) {
            return i;
        }
    }
    
    return -1;

}

int main(int argc, const char * argv[]) {
    
    
    unsigned int A[] = {49,54,24,76,87,29,100,654,322,45};
    
    unsigned int search = 87;
    unsigned int N = 10;
    
    unsigned int result_87 = performSearch(A,search,N);
    if(result_87 != -1){
        cout<<"Item "<<search<<" Found At Location "<<result_87<<endl;
    }
    
    search = 555;
    unsigned int result_555 = performSearch(A,search,N);
    if(result_555 == -1){
        cout<<"Item "<<search<<" Not Found."<<endl;
    }

    return 0;
    
}
