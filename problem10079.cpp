#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;



int main()
{

    long long int value;
    while(cin>>value)
    {
        if(value<0)break;
        cout<<((value*(value+1))/2)+1<<endl;
    }
    return 0;
}
