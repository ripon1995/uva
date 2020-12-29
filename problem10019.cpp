#include<iostream>
using namespace std;

int main()
{
    int number,tc;
    cin>>tc;
    while(tc--)
    {
        cin>>number;
        int n=number;
        int b1=0,b2=0;
        while(n>0)
        {
            if(n%2 == 1) b1++;
            n=n/2;
        }
        n=number;
        while(n>0)
        {
            int mod=n%10;
            if(mod==1 || mod==4 || mod==2 || mod==8) b2++;
            if(mod==3 || mod==5 || mod==6 || mod==9) b2=b2+2;
            if(mod==7) b2=b2+3;
            n=n/10;
        }

        cout<<b1<<" "<<b2<<endl;
    }
    return 0;
}

