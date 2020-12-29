
#include<bits/stdc++.h>
using namespace std;
#define MAX 200005

int phi[MAX];
vector<long long int> phiSum(MAX);

void phiSeive(int n)
{
    for(int i=0;i<=n;i++)phi[i]=i;

    for(int i=2;i<=n;i++)
    {
        if(phi[i]==i)
        {
            for(int j=i;j<=n;j+=i)
            {
                phi[j]=phi[j]-(phi[j]/i);
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        phiSum[i]=phi[i]+phiSum[i-1];
    }
}

int main()
{
    phiSeive(200004);

    long long int value;
    while(scanf("%lld", &value))
    {
        if(value==0)break;
        else if(value==1)printf("0/1\n");
        else if(value==2)printf("1/1\n");
        else
        {
            int lb=lower_bound(phiSum.begin(),phiSum.end(),value-1)-phiSum.begin();
            long long int counter=phiSum[lb-1];
            //cout<<counter<<endl;
            int lob;
            for(int i=1; i<lb; i++)
            {
                if(counter==value-1)
                    break;
                if(__gcd(i,lb)==1)
                {
                    counter++;
                    lob=i;
                }
        }
        printf("%d/%d\n", lob,lb);
        }
    }
    return 0;
}
