#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    cin>>n;
    
    int aux1=n, aux2=0;

    while(aux1!=0){
        aux2=aux2*10 + (aux1%10);
        aux1/=10;
    }
    if(aux2==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    
    return 0;
}