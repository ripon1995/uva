#include<iostream>
#include<cstring>
#include<vector>
#include<cstdio>
using namespace std;

vector<long long int>value(1000,0);

unsigned long long int maleBee(long long int n)
{
    if(value[n]==0)
    {
        if(n==0)return value[n]=0;
        else if(n==1)return value[n]=1;
        return value[n]=maleBee(n-1)+maleBee(n-2)+1;
    }
    return value[n];

}
unsigned long long int femaleBee(long long int n)
{
    if(n==0)return 1;
    return maleBee(n+1);
}
int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n==-1)break;
        cout<<maleBee(n)<<" "<<femaleBee(n)<<endl;
    }
    return 0;
}

