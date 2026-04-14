#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, result =0;
    
    cin>>n;

    for (int i = 5; i >= 0; i--) {
        if(n & (1 << i)) result++;
    }

    cout<<result<<endl;


    return 0;
}