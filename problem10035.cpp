#include<iostream>
using namespace std;

int main()
{
    unsigned long int a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0) break;
        if(a>b)swap(a,b);
        int carry=0,sum=0,counter=0,counter1=0;
        while(b>0)
        {
            if(((a%10)+(b%10)+carry)>9)
            {
                sum++;
                carry=((a%10)+(b%10)+carry)/10;
                counter++;
            }
            counter1++;
            if(counter1>counter)
            {
                carry=0;
                counter1=0;
                counter=0;
            }
            a=a/10;
            b=b/10;
            //cout<<"a%10: "<<a%10<<"\t"<<"b%10: "<<b%10<<"\t"<<"carry: "<<carry<<endl;
        }
        if(sum)
        {
            if(sum==1)cout<<sum<<" carry operation."<<endl;
            else cout<<sum<<" carry operations."<<endl;
        }
        else cout<<"No carry operation."<<endl;
    }
    return 0;
}

