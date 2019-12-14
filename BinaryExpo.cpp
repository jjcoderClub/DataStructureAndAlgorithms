#include <iostream>


using namespace std;




long long powOf(int a, int n){
    
    if(n == 0){
        return 1;
    }
    
    long long res = powOf(a,n/2);
    
    if(n % 2 == 0) {
        return res*res;
    }else{
        return res*res*a;
    }
}

int main(){
    
    cout<<powOf(5,13)<<endl;
   
    return 0;
}
