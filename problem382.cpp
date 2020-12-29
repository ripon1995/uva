#include<iostream>
#include<cmath>
using namespace std;

int sumOfdivisors(long int num)
{
    long int sum=0,n=num,key=0;
    for(long int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
            key=n/i;
        }
    }
    if(sum==num)return 1;
    if(sum>num)return 2;
    if(sum<num)return 3;
}

int main()
{
    long int n;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n)
    {
        if(n==0) break;
        if(n<10) cout<<"    ";
        if(n>=10 && n<100) cout<<"   ";
        if(n>99 && n<1000) cout<<"  ";
        if(n>999 && n<10000) cout<<" ";
        if(sumOfdivisors(n)==1) cout<<n<<"  PERFECT"<<endl;
        if(sumOfdivisors(n)==2) cout<<n<<"  ABUNDANT"<<endl;
        if(sumOfdivisors(n)==3) cout<<n<<"  DEFICIENT"<<endl;
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}

