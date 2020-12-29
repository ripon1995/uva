#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n==0) break;
        int value=log2((double)n);
        long long int val=pow(2,value);
        long long int remainder=(n-val)*2;
        if(remainder==0) cout<<val<<endl;
        else cout<<remainder<<endl;
    }
    return 0;
}

