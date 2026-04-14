#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int h, m, cont=0;
    cin>>h>>m;
    
 
    if (h >= 8 && h <= 20){
        if(h/10==4) cont++;
        if(h%10==4) cont++;
        if(m/10==4) cont++;
        if(m%10==4) cont++;
    }
        
    
    (m!=59) ? m++ : (m=0,h++);
    if (h >= 8 && h <= 20){
        if(h/10==4) cont++;
        if(h%10==4) cont++;
        if(m/10==4) cont++;
        if(m%10==4) cont++;
    }
        
    
    
    cout<<cont<<endl;
 
    return 0;
}