#include<iostream>
#include<cmath>
using namespace std;

int distanceCalculation(int a,int b)
{
    return a*b*2;
}
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        cout<<distanceCalculation(a,b)<<endl;
    }
    return 0;
}

