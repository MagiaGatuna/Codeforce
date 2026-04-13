#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    if (!(cin >> n)) return 0;

    bool div2=(n%2==0);
    bool div3=(n%3==0);

    if(div2 != div3){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}