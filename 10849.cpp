
#include<iostream>
#include<cmath>
using namespace std;

int diagonalCheck(long long int a,long long int b,long long int c,long long int d)
{
    if(abs(a-c)==abs(b-d)) return 1;
    else return 0;
}

int validationCheck(long long int a,long long int b,long long int c,long long int d)
{
    int flag1=0;
    int flag2=0;
    if(a%2 == 0) if(b%2 == 0) flag1=1;
    if(a%2 != 0) if(b%2 != 0) flag1=1;
    if(c%2 == 0) if(d%2 == 0) flag2=1;
    if(c%2 != 0) if(d%2 != 0) flag2=1;
    if(flag1==flag2) return 1;
    else return 0;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int tc1;
        long long int n,x1,x2,y1,y2;
        cin>>tc1;
        cin>>n;
        for(int i=1;i<=tc1;i++)
        {
            cin>>x1>>y1>>x2>>y2;
            if(x1==x2 && y1==y2) cout<<"0"<<endl;
            else if(diagonalCheck(x1,y1,x2,y2)) cout<<"1"<<endl;
            else if(validationCheck(x1,y1,x2,y2)) cout<<"2"<<endl;
            else cout<<"no move"<<endl;
        }
    }
    return 0;
}
