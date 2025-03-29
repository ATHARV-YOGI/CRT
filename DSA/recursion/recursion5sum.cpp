#include <iostream>
using namespace std;

int sum(int n){
    int ans = 0;
    if(n==0) return 0;
    
    ans = n%10 + sum(n/10);
    return ans;
}

int main()
{

    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    cout<<sum(n);
    

    return 0;
}