#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double x;
    cin>>x;
    
    cout<< fixed << setprecision(2) << fabsl(x)<<endl;
    cout<< fixed << setprecision(2) << truncl(sqrtl(fabsl(x)) * 100.0L) / 100.0L<<endl;
    cout << (long long)floorl(x) << endl;
    cout << (long long)ceill(x) << endl;
    cout << (long long)roundl(x) << endl;

    return 0;
}