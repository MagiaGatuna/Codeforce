#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C, D, N, TI,TF, DT, DC, P1, InicioPausa;
    
    cin>>A;
    cin>>B;
    cin>>C;
    cin>>D;
    cin>>N;
    
    TI=A*60+B;
    TF=C*60+D;
    DT=TF-TI;
    
    if(N>=DT) cout<<A<<" "<<B<<endl;
    else{
        DC=DT-N;
        P1=(DC+1)/2;
        InicioPausa=TI+P1;
        cout<<InicioPausa/60<<" "<<InicioPausa%60<<endl;
    }
    
    return 0;
}