#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    int tc,testCase=0;
    long long int n,div1=0,div2=0,div3=0,div4=0;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int counter=1,key=0;
        for(int i=2;i<=n;i++)
        {
            if(n%i == 0 && counter==1)
            {
                div2=n/i;
                div1=i;
                counter=2;
            }
            if(n%i == 0 && key==1)
            {
                div4=n/i;
                div3=i;
                break;
            }
            if(counter==2)key=1;
        }
        cout<<"Case #"<<++testCase<<": "<<n<<" = "<<div1<<" * "<<div2<<" = "<<div3<<" * "<<div4<<endl;
    }
    return 0;
}

