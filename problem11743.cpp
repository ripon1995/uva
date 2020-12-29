#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;

bool doubleSum(vector<int>v)
{
    int sum=0,dbleSum=0;
    for(int i=0;i<v.size();i++)
    {
        if(i%2==0)sum=sum+v[i];
        else
        {
            int num=2*v[i];
            dbleSum=dbleSum+(num%10)+(num/10);
        }
    }
    if((sum+dbleSum)%10 == 0)return true;
    else return false;
}

int main()
{
    string num;
    vector<int>v;
    int tc;
    cin>>tc;
    getchar();
    while(tc--)
    {
        getline(cin,num);
        for(int i=num.length()-1;i>=0;i--)if(num[i]!=' ')v.push_back(num[i]-'0');
        if(doubleSum(v)) cout<<"Valid"<<endl;
        else cout<<"Invalid"<<endl;
        v.clear();
    }
    return 0;
}

