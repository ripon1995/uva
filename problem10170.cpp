#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int a,s;
    while(cin>>a>>s)
    {
        long long int person=0;
        if(a>=s) person=a;
        else
        {
            double num=(sqrt(((((2*a)-1)*((2*a)-1))+(8*s)))-((2*a)-1))/2.0;
            if(num-(int)num != 0)person=a+floor(num);
            else person=a+floor(num)-1;
        }
        cout<<person<<endl;
    }
    return 0;
}

