#include<iostream>
#include<vector>
using namespace std;

void fuc1(long long int n)
{

    vector<long long int>v1,v2,remainder;
    for(int i=1;i<=n;i+=2) if(i<=n) remainder.push_back(i);
    for(long long int i=2;i<n;i+=2)if(i<n)v1.push_back(i);
    int key=1;
    while(1)
    {
        if(v1.size()==1) break;
        for(long long int i=0;i<v1.size();i++)
        {
            if(i%2!=key) v2.push_back(v1[i]);
            else remainder.push_back(v1[i]);
        }
        if(v1[v1.size()-1]!=v2[v2.size()-1]) key=1;
        if(v1[v1.size()-1]==v2[v2.size()-1]) key=0;
        v1.clear();
        v1=v2;
        v2.clear();
    }
    cout<<"Discarded cards: ";
    for(int i=0;i<remainder.size();i++)
    {
        cout<<remainder[i];
        if(i==remainder.size()-1) break;
        else cout<<", ";
    }
    cout<<endl;
    cout<<"Remaining card: "<<v1[0]<<endl;
    v1.clear();
    remainder.clear();
}


void function2(long long int n)
{
    vector<long long int>v1,v2,remainder;
    for(int i=1;i<=n;i+=2) if(i<=n) remainder.push_back(i);
    for(long long int i=2;i<=n;i+=2)if(i<=n)v1.push_back(i);
    int key=0;
    while(1)
    {
        if(v1.size()==1) break;
        for(long long int i=0;i<v1.size();i++)
        {
            if(i%2!=key) v2.push_back(v1[i]);
            else remainder.push_back(v1[i]);
        }
        if(v1[v1.size()-1]!=v2[v2.size()-1]) key=1;
        if(v1[v1.size()-1]==v2[v2.size()-1]) key=0;
        v1.clear();
        v1=v2;
        v2.clear();
    }
    cout<<"Discarded cards: ";
    for(int i=0;i<remainder.size();i++)
    {
        cout<<remainder[i];
        if(i==remainder.size()-1) break;
        else cout<<", ";
    }
    cout<<endl;
    cout<<"Remaining card: "<<v1[0]<<endl;
    v1.clear();
    remainder.clear();
}

int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n==0) break;
        else if(n==1)
        {
            cout<<"Discarded cards:"<<endl;
            cout<<"Remaining card: 1"<<endl;

        }
        else if(n==2)
        {
            cout<<"Discarded cards: 1"<<endl;
            cout<<"Remaining card: 2"<<endl;

        }
        else if(n%2==1) fuc1(n);
        else if(n%2==0) function2(n);
    }
    return 0;
}

