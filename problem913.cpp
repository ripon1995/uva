#include<cmath>
#include<iostream>
using namespace std;

int main()
{
    long long int n;
    while(cin>>n)
    {
        long long int x=((n-1)/2)+1;
        x=x*x;
        x=(2*x)-1;
        cout<<x+(x-2)+(x-4)<<endl;
    }
    return 0;
}

