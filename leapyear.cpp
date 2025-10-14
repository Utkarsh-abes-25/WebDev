#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout<<"enter year";
    cin>> n;
    (n%100==0)? ((n%400==0)? cout<<"Leap Year": cout<<"not leap year"):((n%4==0)? cout<<"Leap Year": cout<<" not Leap Year");
    return 0;
}
