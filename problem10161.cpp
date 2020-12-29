#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n<=0) break;
        long long int diagonal,row,column;
        if((sqrt(n)-(int)sqrt(n))!=0)diagonal=((ceil(sqrt(n))*ceil(sqrt(n)))+(floor(sqrt(n))*floor(sqrt(n)))+1)/2;
        else diagonal=((ceil(sqrt(n))*ceil(sqrt(n)))+((ceil(sqrt(n))-1)*(ceil(sqrt(n))-1))+1)/2;
        if((int)(ceil(sqrt(n)))%2 == 1)
        {
            if(sqrt(n)>sqrt(diagonal))
            {
                row=ceil(sqrt(n))-(n-diagonal);
                column=ceil(sqrt(n));
            }
            else
            {
                row=ceil(sqrt(n));
                column=ceil(sqrt(n))-(diagonal-n);
            }
        }
        else
        {
            if(sqrt(n)>sqrt(diagonal))
            {
                row=ceil(sqrt(n));
                column=ceil(sqrt(n))-(n-diagonal);
            }
            else
            {
                row=ceil(sqrt(n))-(diagonal-n);
                column=ceil(sqrt(n));
            }
        }
        cout<<row<<" "<<column<<endl;
    }
    return 0;
}

