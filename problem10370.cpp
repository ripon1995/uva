#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int tc,st;
    cin>>tc;
    while(tc--)
    {
        int sum=0;
        cin>>st;
        int number[st];
        for(int i=0;i<st;i++)
        {
            cin>>number[i];
            sum=sum+number[i];
        }
        double avg=(double)sum/st;
        int counter=0;
        for(int i=0;i<st;i++)if(number[i]>avg) counter++;
        printf("%.3lf%%\n", (double)counter*100/st);
    }
    return 0;
}

