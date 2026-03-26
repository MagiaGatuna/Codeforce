#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x1;
    long long int x2;
    long long int y1;
    long long int y2;

    cin>>x1>>y1>>x2>>y2;
    
    cout << abs(x1-x2)+abs(y1-y2) << endl;
    cout << fixed << setprecision(10) << (long double)sqrt((long double)(x1-x2)*(x1-x2)+(long double)(y1-y2)*(y1-y2))<< endl;

    return 0;
}