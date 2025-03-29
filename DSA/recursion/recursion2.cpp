#include <iostream>
using namespace std;

void nprint(int n, int count){
    if(count >n) return;
    cout<< count++ <<" ";
    nprint(n,count);
}

int main()
{

    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    nprint(n, 1);
    

    return 0;
}