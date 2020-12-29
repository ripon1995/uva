#include<iostream>
#include<vector>
using namespace std;

vector<long long int> seive(vector<long long int>v)
{
    vector<int>status(32768);
    for(int i=2;i<=182;i++)
    {
        if(status[i]==0)
        {
            for(long long int j=2*i;j<=32768;j+=i) status[j]=1;
        }
    }
    for(long long int i=2;i<=32768;i++)
    {
        if(status[i]==0) v.push_back(i);
    }
    return v;
}

int main()
{
    vector<long long int>v;
    v=seive(v);
    long long int n;
    while(cin>>n)
    {
        if(n==0) break;
        long long int x1=0,x2=0,counter=0;
        for(long long int i=0; ; i++)
        {
            if(v[i]>=n)break;
            long long int a=v[i];
            long long int j=i;
            while(v[j]<=n)
            {
                if((v[j]+a)==n)
                {

                    x1=a;
                    x2=v[j];
                    //break;
                    counter++;
                }
                j++;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}


