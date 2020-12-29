#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)break;
        int cola=0;
        if(n>1)n=n+1;
        while(n>=3)
        {
            cola=cola+(n/3);
            n=(n/3)+(n%3);
        }
        cout<<cola<<endl;
    }
    return 0;
}

