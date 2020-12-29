#include<iostream>
#include<cstring>
#include<vector>
#include<cstdio>
using namespace std;

int main()
{
    int counter=0;
    int n,k;
    while(cin>>n)
    {
        if(n==0)break;
        if(counter>0)cout<<endl;
        counter++;
        cin>>k;
        vector<int>w(n);
        vector<int>l(n);
        int p1,p2;
        int value=(k*n*(n-1))/2;
        string m1,m2;
        for(int i=1;i<=value;i++)
        {
            cin>>p1>>m1>>p2>>m2;
            if(m1=="paper" && m2=="rock" || m1=="scissors"&&m2=="paper" || m1=="rock" && m2=="scissors")
            {
                w[p1-1]++;
                l[p2-1]++;
            }
            else if(m1=="paper"&&m2=="scissors" || m1=="scissors"&&m2=="rock" || m1=="rock"&&m2=="paper")
            {
                w[p2-1]++;
                l[p1-1]++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(w[i]!=0 || l[i]!=0)printf("%.3lf\n",(w[i]/(double)(w[i]+l[i])));
            else cout<<"-"<<endl;
        }
    }
    return 0;
}

