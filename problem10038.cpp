#include<iostream>
#include<cmath>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

bool jollyChecker(vector<int>v,vector<int>v1)
{
    sort(v.begin(),v.end());
    for(int i=0;i<v1.size();i++)
    {
        if(v[i]!=v1[i]) return false;
    }
    return true;
}


int main()
{
    int n,value,key;
    vector<int>v,v1;
    while(scanf("%d", &n)!=EOF)
    {
        int x=0;
        for(int i=1;i<=n;i++)
        {
            cin>>value;
            if(i>1)
            {
                v.push_back(abs(key-value));
                v1.push_back(++x);
            }
            key=value;
        }
        if(jollyChecker(v,v1)) cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;
        v.clear();
        v1.clear();
    }
    return 0;
}

