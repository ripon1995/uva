#include<iostream>
#include<vector>
using namespace std;

vector<long long int> seive(vector<long long int>v)
{
    vector<int>status(1000010);
    for(int i=2;i<=1001;i++)
    {
        if(status[i]==0)
        {
            for(long long int j=2*i;j<=1000010;j+=i) status[j]=1;
        }
    }
    for(long long int i=2;i<=1000010;i++)
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
        long long int x1=0,x2=0;
        for(long long int i=1; ; i++)
        {
            //cout<<v[i]<<endl;
            if(v[i]>=n)break;
            long long int a=v[i];
            //cout<<"DEBUG"<<endl;
            long long int j=i;
            while(v[j]<=n)
            {
                if((v[j]+a)==n)
                {

                    x1=a;
                    x2=v[j];
                    break;
                }
                j++;
            }
            if(x1 && x2) break;
        }
        if( x1 && x2) cout<<n<<" = "<<x1<<" + "<<x2<<endl;
        else cout<<"Goldbach's conjecture is wrong."<<endl;
    }
    return 0;
}

