#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int number,k;
    while(cin>>number>>k)
    {
        int n=number;
        int value=0;
        if(cin.eof())break;
        while(n>=k)
        {
            value=value+(n/k);
            n=(n/k)+(n%k);
        }
        cout<<number+value<<endl;
    }
    return 0;
}

