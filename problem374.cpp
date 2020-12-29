#include<bits/stdc++.h>

using namespace std;

#define ll long long int

ll modularExponentiation(ll a ,ll b,ll c)
{
    ll ans=1;
    while(b!=0)
    {
        if(b%2==1)
        {
            ans=ans*a;
            ans%=c;
        }
        a*=a;
        a%=c;
        b/=2;
    }
    return ans;
}

int main()
{
    ll b,p,m;
    while(scanf("%lld %lld %lld", &b,&p,&m)!=EOF)
    {
        printf("%lld\n", modularExponentiation(b,p,m));
    }

    return 0;
}

