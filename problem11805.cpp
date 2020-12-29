#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int testCase=0,tc,n,k,p;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>k>>p;
        int position=(k+p)%n;
        if(position!=0)cout<<"Case "<<++testCase<<": "<<position<<endl;
        else cout<<"Case "<<++testCase<<": "<<n<<endl;
    }
    return 0;
}

