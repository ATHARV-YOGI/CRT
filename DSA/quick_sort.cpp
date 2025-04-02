#include<iostream>

void show(int *arr, int n){
     for(int i = 0 ; i < n ; i++){
        cout<<arr[i];
     }
}
int main(){
    int arr[] = {7,5,9,2,6,4,};
    int n=sizeof(arr)/sizeof(arr[0]);

    // quick_sort(arr,n);

    show(arr,n);
}