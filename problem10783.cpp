
#include<iostream>
using namespace std;

int oddSum(int a,int b)
{
    int sum=0;
    for(int i=a;i<=b;i++)
    {
        if(i%2 == 0) continue;
        sum=sum+i;
    }
    return sum;
}

int main()
{
    int tc,testCase=0,a,b;
    cin>>tc;
    while(tc--)
    {
        cin>>a>>b;
        cout<<"Case "<<++testCase<<": "<<oddSum(a,b)<<endl;
    }
    return 0;
}
