#include<iostream>
#include<vector>
using namespace std;

bool validNumber(long int n)
{
    vector<int>v,counter(10);
    counter.assign(10,0);
    while(n>0)
    {
        v.push_back(n%10);
        n=n/10;
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0)counter[0]=counter[0]+1;
        if(v[i]==1)counter[1]=counter[1]+1;
        if(v[i]==2)counter[2]=counter[2]+1;
        if(v[i]==3)counter[3]=counter[3]+1;
        if(v[i]==4)counter[4]=counter[4]+1;
        if(v[i]==5)counter[5]=counter[5]+1;
        if(v[i]==6)counter[6]=counter[6]+1;
        if(v[i]==7)counter[7]=counter[7]+1;
        if(v[i]==8)counter[8]=counter[8]+1;
        if(v[i]==9)counter[9]=counter[9]+1;

    }
    v.clear();
    if(counter[0]>1 ||counter[1]>1 ||counter[2]>1 ||counter[3]>1 ||counter[4]>1 ||counter[5]>1 ||counter[6]>1 ||counter[7]>1 ||counter[8]>1 ||counter[9]>1)
    {
        return false;
    }
    else return true;
}

int main()
{
    long int n,m;
    while(cin>>n>>m)
    {
        long int house=0;
        for(long int i=n;i<=m;i++)
        {
            house=house+validNumber(i);
        }
        cout<<house<<endl;
    }
    return 0;
}

