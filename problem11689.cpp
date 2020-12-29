#include<iostream>
using namespace std;

int main()
{
    int tc,e,f,c;
    cin>>tc;
    while(tc--)
    {
        cin>>e>>f>>c;
        int n=e+f;
        int cola=0;
        while(n>=c)
        {
            cola=cola+(n/c);
            n=(n/c)+(n%c);
        }
        cout<<cola<<endl;
    }
    return 0;
}

