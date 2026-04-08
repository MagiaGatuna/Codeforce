#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    char OP;
    cin>>a>>OP>>b;
    if (OP=='+') cout<<a+b<<endl;
    else if (OP=='-') cout<<a-b<<endl;
    else if (OP=='*') cout<<a*b<<endl;
    else if (OP=='/') cout<<a/b<<endl;

    return 0;
}