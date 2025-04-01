#include<iostream>
using namespace std;

int binary_search(int *arr, int mid, int n){

    int s = 0;
    int e = (sizeof(arr)/sizeof(arr[0])) - 1;
    
    int mid = s + (e-s)/2;

    if(s>e) return 0;

    if(arr[mid] == n) return 1;

    if(n<arr[mid]) {
        mid = s + (mid-s)/2;
        binary_search(arr, mid, n)
    }
    else 
    {
        mid = mid + (e - mid)/2;
        binary_search(arr, mid, n);
    }

}

int main(){
    int arr[5]={6,4,9,3,2};
    int n=4;
    

    cout<<binary_search(arr, mid, n);

    return 0;
}