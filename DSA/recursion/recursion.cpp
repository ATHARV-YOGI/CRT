#include <iostream>
using namespace std;

int power(int n, int p)
{

    int ans = 0;

    if (p == 0)
        return 1;

    ans = n * power(n, p - 1);

    return ans;
}

int main()
{

    int n, p, ans;
    cout << "enter the value of n and p" << endl;
    cin >> n >> p;
    ans = power(n, p);
    cout << ans;

    return 0;
}