#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;
vector<long long int>v(1000000,0);
void seieve()
{
    for(long long int i=3;i<=v.size();i+=2) if(v[i]==0)for(long long int j=3*i;j<=v.size();j+=2*i)v[j] = 1;
}

bool primeCheck(long long int n)
{
    if(v[n]==0)
    {
        return true;
    }
    else return false;
}
bool emirpCheck(long long int n)
{
    vector<int>vc;
    long long int value=n;
    while(n>0)
    {
        vc.push_back(n%10);
        n=n/10;
    }
    int key=vc.size()-1;
    long long int number=0;
    for(int i=0;i<vc.size();i++)
    {
        number=number+(pow(10,key) * vc[i]);
        key--;
    }
    if(number!=value && v[number]==0 && !(number%2==0))return true;
    else return false;
}

int main()
{
    long long int n;
    seieve();
    while(cin>>n)
    {
        if(n==2 ||n==3||n==5||n==7)cout<<n<<" is prime."<<endl;
        else
        {
            if(n%2 ==0) cout<<n<<" is not prime."<<endl;
            else if(!primeCheck(n)) cout<<n<<" is not prime."<<endl;
            else if(primeCheck(n) && ! emirpCheck(n)) cout<<n<<" is prime."<<endl;
            else if(primeCheck(n) && emirpCheck(n))cout<<n<<" is emirp."<<endl;
        }
    }
    return 0;
}


