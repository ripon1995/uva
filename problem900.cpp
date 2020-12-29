#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;

vector<long long int> fibonacci()
{
    vector<long long int>v(50,0);
    v[0]=1;
    v[1]=2;
    for(long long int i=2;i<v.size();i++)
    {
        if(v[i]==0) v[i]=v[i-1]+v[i-2];
    }
    return v;
}

int main()
{
    vector<long long int>v;
    v=fibonacci();
    int num;
    while(cin>>num)
    {
        if(num==0) break;
        cout<<v[num-1]<<endl;
    }
    return 0;
}

