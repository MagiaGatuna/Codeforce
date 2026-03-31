#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int c;
    long long int d;
    int bonus=0;
    cin>>c;
    cin>>d;
    
    if(c>d) bonus=500;
    
    cout << 50*c-10*d+bonus << endl;

    return 0;
}