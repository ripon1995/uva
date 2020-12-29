#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int testCase=0;
    int r,n;
    while(cin>>r>>n)
    {
        if(r==0 & n==0) break;
        int suffix=ceil((double)(r-n)/n);
        if(suffix<=26)cout<<"Case "<<++testCase<<": "<<suffix<<endl;
        else cout<<"Case "<<++testCase<<": "<<"impossible"<<endl;
    }
    return 0;
}

