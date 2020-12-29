#include<iostream>
using namespace std;

int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        int amp,fr;
        cin>>amp;
        cin>>fr;

        for(int t=1;t<=fr;t++)
        {
            int k=0;

            for(int i=1;i<=amp;i++)
            {
                for(int j=1;j<=i;j++) cout<<i;
                cout<<endl;
                k++;
            }
            k--;
            for(int i=k;i>=1;i--)
            {
                for(int j=1;j<=i;j++) cout<<i;
                cout<<endl;
            }
            if(t<fr) cout<<endl;
        }
        if(testCase>0) cout<<endl;
    }
    return 0;
}

