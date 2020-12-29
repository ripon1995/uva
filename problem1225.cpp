#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    vector<int>v2(10);
    v2.assign(10,0);
    int tc;
    long long int n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int k=i;
            while(k>0)
            {
                v.push_back(k%10);
                k=k/10;
            }
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)v2[0]=v2[0]+1;
            else if(v[i]==1)v2[1]=v2[1]+1;
            else if(v[i]==2)v2[2]=v2[2]+1;
            else if(v[i]==3)v2[3]=v2[3]+1;
            else if(v[i]==4)v2[4]=v2[4]+1;
            else if(v[i]==5)v2[5]=v2[5]+1;
            else if(v[i]==6)v2[6]=v2[6]+1;
            else if(v[i]==7)v2[7]=v2[7]+1;
            else if(v[i]==8)v2[8]=v2[8]+1;
            else if(v[i]==9)v2[9]=v2[9]+1;
        }
        v.clear();
        for(int i=0;i<v2.size();i++)
        {
            cout<<v2[i];
            if(i<v2.size()-1) cout<<" ";
        }
        cout<<endl;
        v2.assign(10,0);
    }
    return 0;
}

