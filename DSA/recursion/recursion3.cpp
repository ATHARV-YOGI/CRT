#include <iostream>
using namespace std;

int nprint(int n){
    if(n==0) return 1;
    nprint(n-1);
    cout<< n <<" ";
}

int main()
{

    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    nprint(n);
    

    return 0;
}