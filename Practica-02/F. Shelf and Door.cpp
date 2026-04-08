#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x, y;
    vector<long long int> estante(3);
    cin>>estante[0]>>estante[1]>>estante[2];
    cin>>x>>y;
    sort(estante.begin(), estante.end());
    if(x>y) swap(x,y);
    if (estante[0] <= x && estante[1] <= y) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}