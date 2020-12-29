#include<iostream>
#include<vector>
using namespace std;

bool isEmpty(vector<int>v)
{
    int flag=0;
    for(int i=0;i<v.size();i++)if(v[i])return false;
    return true;
}

int main()
{
    int n,k,m;
    while(cin>>n>>k>>m)
    {
        if(n==0 && m==0 && k==0)break;
        vector<int>v;
        for(int i=0;i<n;i++)v.push_back(i+1);
        int i=0,j=n-1;
        int counterClock=0;
        int counterAClock=0;
        int posI,posJ;
        int valueClock=0,valueAClock=0,value=0;
        while(1)
        {
            value++;
            if(value%2==1)
            {
                while(1)
                {
                    if(v[i])counterClock++;
                    if(counterClock==k)
                    {
                        valueClock=v[i];

                        counterClock=0;
                        posI=i;
                    }
                    i++;
                    if(i==n)i=0;
                    if(valueClock)break;
                }
            }

            if(value%2==0)
            {
                while(1)
                {
                    if(v[j])counterAClock++;
                    if(counterAClock==m)
                    {
                        valueAClock=v[j];

                        posJ=j;
                        counterAClock=0;
                    }
                    j--;
                    if(j==-1)j=n-1;
                    if(valueAClock)break;
                }
            }
            if((valueClock && valueAClock)&&valueAClock!=valueClock)
            {
                if(valueClock<10)cout<<"  "<<valueClock;
                if(valueClock>=10)cout<<" "<<valueClock;
                if(valueAClock<10)cout<<"  "<<valueAClock;
                if(valueAClock>=10)cout<<" "<<valueAClock;
                valueAClock=0;
                v[posI]=0;
                v[posJ]=0;
                valueClock=0;
                if(!isEmpty(v))cout<<",";
            }
            else if(valueAClock==valueClock)
            {
                if(valueClock<10)cout<<"  "<<valueClock;
                else cout<<" "<<valueClock;
                valueClock=0;
                valueAClock=0;
                v[posI]=0;
                v[posJ]=0;
                valueAClock=0;
                if(!isEmpty(v))cout<<",";
            }
            if(isEmpty(v))break;
        }
        cout<<endl;
    }
    return 0;
}

