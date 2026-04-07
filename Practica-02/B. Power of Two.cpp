#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    if ((n>0)&&(n&(n-1))==0) cout<<1<<endl;
    else cout<<0<<endl;

    return 0;
}