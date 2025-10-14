#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,a,b,c,p,m;
    cout << "enter 4-digit no";
    cin >> n;
    m=n;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    p= pow(a,4)+pow(b,4)+pow(c,4)+pow(n,4);
    (m==p)? cout<<"yes" :cout<<"no";
    return 0;
}