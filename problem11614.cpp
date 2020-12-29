#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int tc;
    long long int n;
    cin>>tc;
    while(tc--)
    {
        long long int sum=0,i,counter=0;
        cin>>n;
        long long int row=(sqrt(1+(4*2*n))-1)/2.0;
        cout<<row<<endl;
    }
    return 0;
}

