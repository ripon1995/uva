#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,c,value,value2,key=1;
    while(cin>>n>>m>>c)
    {
        if(n==0&&m==0&&c==0) break;
        int maximum=-1,consumption=0;
        vector<int>v,counter(n,-1);
        for(int i=0;i<n;i++)
        {
            cin>>value;
            v.push_back(value);
        }
        for(int i=1;i<=m;i++)
        {
            cin>>value2;
            if(counter[value2-1]==-1)
            {
                counter[value2-1]=1;
                consumption=consumption+v[value2-1];
            }
            else if(counter[value2-1]==1)
            {
                counter[value2-1]=-1;
                consumption=consumption-v[value2-1];
            }
            if(consumption>maximum) maximum=consumption;
        }
        if(maximum<=c)
        {
            cout<<"Sequence "<<key<<endl;
            cout<<"Fuse was not blown."<<endl;
            cout<<"Maximal power consumption was "<<maximum<<" amperes."<<endl;
        }
        if(maximum>c)
        {
            cout<<"Sequence "<<key<<endl;
            cout<<"Fuse was blown."<<endl;
        }
        key++;
        cout<<endl;
    }
    return 0;
}

