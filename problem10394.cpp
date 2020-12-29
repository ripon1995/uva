
#include<vector>
#include<iostream>
using namespace std;

vector<long long int>seive(vector<long long int>v)
{
    vector<int>status(18409201);
    for(long int i=2;i<=4291;i++)
    {
        if(status[i]==0)
        {
            for(long long int j=2*i;j<=18409201;j+=i) status[j]=1;
        }
    }
    long long int value1=0,value2=0;
    v.push_back(3);
    v.push_back(5);
    for(long long int i=5;i<=18409201;i++)
    {
        int counter1=0,counter2=0;
        if(status[i]==0)
        {
            value1=i;
            if(value1-value2==2)
            {
                v.push_back(value2);
                v.push_back(value1);
            }
            value2=value1;
        }
    }
    return v;
}

int main()
{
    vector<long long int>v;
    v=seive(v);
    long long int n;
    while(cin>>n)
    {
        if(cin.eof()) break;
        cout<<"("<<v[2*(n-1)]<<", "<<v[(2*(n-1))+1]<<")"<<endl;
    }
    return 0;
}
