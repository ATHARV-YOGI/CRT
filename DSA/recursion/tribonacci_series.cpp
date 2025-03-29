#include<iostream>
using namespace std;

int tribo(int n){
    if( n==-1 || n==0 ) return 0;
    if(n==1) return 1;

    return tribo(n-1) + tribo(n-2) + tribo(n-3) ;
}

int main(){
    cout<<tribo(5);
    return 0;
}