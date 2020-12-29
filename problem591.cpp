#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,testCase=0;
    vector<int>v;
    while(cin>>n)
    {
        if(n==0) break;
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            int value;
            cin>>value;
            v.push_back(value);
            sum=sum+value;
        }
        sum=sum/n;
        int brick=0;
        for(int i=0;i<v.size();i++)if(v[i]<sum) brick=brick+sum-v[i];
        cout<<"Set #"<<++testCase<<endl;
        cout<<"The minimum number of moves is "<<brick<<"."<<endl;
        v.clear();
        cout<<endl;
    }
    return 0;
}

