#include<iostream>
#include<cmath>
using namespace std;

long long int soldiersDifference(long long int a,long long int b)
{
    return abs(a-b);
}
int main()
{
    long long int a,b;
    while(cin>>a>>b)
    {
        cout<<soldiersDifference(a,b)<<endl;
    }
    return 0;
}

