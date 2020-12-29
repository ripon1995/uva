#include<iostream>
using namespace std;

bool isDivisible(long long int a,long long int b,long long int c,long long int d,long long int x)
{
    long long int value=(a*x*x)+(b*x)+c;
    if(value%d==0)return true;
    else return false;
}

int main()
{
    long long int a,b,c,d,l;
    while(cin>>a>>b>>c>>d>>l)
    {
        if(a==0&&b==0&&c==0&&d==0&&l==0) break;
        int counter=0;
        for(long long int i=0;i<=l;i++)
        {
            if(isDivisible(a,b,c,d,i)) counter++;
        }
        cout<<counter<<endl;
    }
    return 0;
}

