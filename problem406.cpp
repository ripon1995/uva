#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

vector<long int> seive(vector<long int>v)
{
    vector<int> status(1000);
    for(int i=2;i<=32;i++)
    {
        for(int j=2*i;j<=1000;j+=i)if(status[j]==0) status[j]=1;
    }
    v.push_back(1);
    for(int i=2;i<=1000;i++) if(status[i]==0) v.push_back(i);
    return v;
}

int main()
{
    vector<long int>v,p,primes;
    v=seive(v);
    int n,c;
    while(cin>>n>>c)
    {
        if(cin.eof())break;
        int i=0,counter=0;
        while(v[i]<=n && i<v.size())
        {
            p.push_back(v[i]);
            counter++;
            i++;
        }
        /*cout<<p.size()<<endl;
        cout<<counter<<endl;*/
        if((counter%2)!=0)
        {
            int index=floor(counter/2.0)-floor(((2*c)-1)/2.0);
            if(((2*c)-1)<p.size())
            {
                while(primes.size()<(2*c)-1)
                {
                    primes.push_back(v[index]);
                    index++;
                }
            }
            else primes=p;
        }
        else
        {
            int index=ceil(counter/2.0)-c;
            if((2*c)<p.size())
            {
                while(primes.size()<(2*c))
                {
                    primes.push_back(v[index]);
                    index++;
                }
            }
            else primes=p;
        }
        cout<<n<<" "<<c<<":";
        for(int i=0;i<primes.size();i++) cout<<" "<<primes[i];
        primes.clear();
        p.clear();
        cout<<endl<<endl;
    }
    return 0;
}

