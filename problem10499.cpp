#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n<0) break;
        if(n==1) cout<<"0%"<<endl;
        else printf("%.0lf%%\n", ceil((double)((n/4.0)*100)));
    }
    return 0;
}

