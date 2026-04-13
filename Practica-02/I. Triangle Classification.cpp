#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a, b, c;
    
    cin>>a>>b>>c;
    
    if(a+b>c && a+c>b && b+c>a){
        if(a==b && b==c){
            cout<<"Equilateral"<<endl;
        } else if(a==b||b==c||a==c){
            cout<<"Isosceles"<<endl; 
        }else{
           cout<<"Scalene"<<endl; 
        }
    }else{
        cout<<"Invalid"<<endl;
    }

    
    return 0;
}