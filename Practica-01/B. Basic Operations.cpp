#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long a, b;
    cin>>a>>b;
    cout << a+b << endl;
    cout << a-b << endl;
    cout << (long long)floor((double)a / b) << endl;
    cout << a - ((long long)floor((double)a / b) * b) << endl;
    cout << a*b << endl;
    printf("%.6f\n", (double)a / b);
    cout << (long long)ceil((double)a / b) << endl;
    return 0;
}