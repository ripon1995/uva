#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

long long int length(long long int n)
{
    long long int counter=0;
    while(n>=1)
    {
        if(n%2==0) n=n/2;
        else n=(3*n)+1;
        counter++;
        if(n==1) break;
    }
    return counter;
}

int main()
{
    long long int l,h;
    while(cin>>l>>h)
    {
        if(l==0 && h==0) break;
        if(l>h)swap(l,h);
        long long int maxValue=0,maxLen=0;
        for(long long int i=l;i<=h;i++)
        {
            long long int value=length(i);
            if(value>maxLen)
            {
                maxLen=value;
                maxValue=i;
            }
        }
        cout<<"Between "<<l<<" and "<<h<<", "<<maxValue<<" generates the longest sequence of "<<maxLen<<" values."<<endl;
    }
    return 0;
}

