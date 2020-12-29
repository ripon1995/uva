#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(cin.eof())break;
        int cola=n;
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

