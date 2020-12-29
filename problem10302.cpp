#include<vector>
#include<iostream>
using namespace std;


vector<long long int> powerCube()
{
    vector<long long int>v;
    long long int sum=0;
    for(long long int i=1;i<=50000;i++)
    {
        v.push_back(sum+(i*i*i));
        sum=sum+(i*i*i);
    }
    return v;
}

int main()
{
    vector<long long int>sum;
    sum=powerCube();
    long long int n;
    while(cin>>n)
    {
        cout<<sum[n-1]<<endl;
    }
    return 0;
}

