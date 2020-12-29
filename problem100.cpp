#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int cycleCounter(long long int a,long long int b)
{
    int counter1=0;
    for(int i=a;i<=b;i++)
    {
        int value=i;
        int counter=1;
        while(value>=1)
        {
            if(value==1) break;
            if(value%2 == 0)
            {
                value=value/2;
                counter++;
            }
            else
            {
                value=(value*3)+1;
                counter++;
            }
        }
        if(counter>counter1) counter1=counter;
    }
    return counter1;
}

int main()
{
    long long int a,b;
    while(cin>>a>>b)
    {
        if((a||b)==EOF) break;
        if(a>b)
        {
            swap(a,b);
            cout<<b<< " "<<a<<" "<<cycleCounter(a,b)<<endl;
        }
        else cout<<a<<" "<<b<<" "<<cycleCounter(a,b)<<endl;
    }
    return 0;
}
