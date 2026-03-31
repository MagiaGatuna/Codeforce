#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int m,n, k1, k2, k3, k4, k5, r1, r2, r3, r4, r5;
    cin>>m;
    cin>>n;
    cin>>k1>>k2>>k3>>k4>>k5;
    
    r1=(n+k1)%m;
    r2=(r1-(k2%m)+m)% m;
    r3=(r2+k3)%m;
    r4=(r3-(k4%m)+m)%m;
    r5=(r4+k5)%m;

    cout<<r1<<" "<<r2<<" "<<r3<<" "<<r4<<" "<<r5<< endl;
    
    return 0;
}