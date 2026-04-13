#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=0, b;
    for(int i=0;i<5;i++){
       cin>>b;
        n+=b; 
    }
    if(n%2==0) cout<<"ON"<<endl;
    else cout<<"OFF"<<endl;
    
    return 0;
}