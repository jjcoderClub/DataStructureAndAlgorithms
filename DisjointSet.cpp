#include <iostream>
#include <limits.h>

using namespace std;




void initialize( int arr[],int size[],int n){
    
    for(int i = 0;i<n;i++){
        arr[ i ] = i ;
        size[ i ] = 1;
    }
    
}

int parent(int arr[] ,int x){
    
    while(arr[x] != x){
        arr[x] = arr[arr[x]] ;
        x = arr[x];
    }
    
    return x;
}

bool find(int arr[],int x,int y){
    
    int root_x = parent(arr,x);
    int root_y = parent(arr,y);
    return (root_x == root_y);
    
}

void unionOp(int arr[],int size[],int x,int y){
    
    int root_x = parent(arr,x);
    int root_y = parent(arr,y);
    
    if (root_x  == root_y ){
        return;
    }
    
    if(size[root_x] < size[root_y]){
        
        arr[root_x] = root_y;
        size[root_y] += size[root_x];
        
    }else{
        arr[root_y] = root_x;
        size[root_x] += size[root_y];
    }
    
}




int main(){
    
    
    int N = 5;
    int arr[5];
    int size[5];
    initialize(arr,size,N);
    
    unionOp(arr,size,0,2);
    unionOp(arr,size,4,2);
    unionOp(arr,size,3,1);
    
    
    if(find(arr,0,4)){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
    
    if(find(arr,0,1))
        cout << "Yes\n";
    else
        cout << "No\n";
    
    
    return 0;
}
