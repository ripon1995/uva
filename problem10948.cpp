#include<iostream>
#include<vector>
using namespace std;

vector<long long int> simpleSieve(long long int limit,vector<long long int> prime)
{
    vector<long long int>mark(limit,0);
    for(long long int i=3;i<=limit;i+=2) if(mark[i]==0) for(long long int j=3*i;j<=limit;j +=2*i) mark[j]=1;

    prime[2]=0;
    for(long long int i=3;i<=limit;i+=2) if(mark[i]==0) prime[i]=0;
    return prime;
}

void findSum(vector<long long int>prime,long long int n)
{
    long long int value1=0,value2=0;
    for(int i=0;i<prime.size();i++)
    {
        if(prime[i]==0)
        {
            value1=i;
        }
        if(value1)
        {
            if(value1>=n)
            {
                value1=0;
                value2=0;
                break;
            }
            long long int rest=n-value1;
            if(prime[rest]==0)
            {
                value2=rest;
                break;
            }
            else value1=0;
        }
        if(value1 && value2) break;
    }
    if(value1 && value2)cout<<n<<":"<<endl<<value1<<"+"<<value2<<endl;
    else cout<<n<<":"<<endl<<"NO WAY!"<<endl;
}



int main()
{
    vector<long long int>prime(1000000,1);
    prime=simpleSieve(1000000,prime);

    long long int n;
    while(cin>>n)
    {
        if(n==0) break;
        findSum(prime,n);
    }

    return 0;
}

