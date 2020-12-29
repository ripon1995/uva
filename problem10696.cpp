#include<iostream>
using namespace std;

long long int f91(long long int n)
{
    if(n<=100) return 91;
    else if(n>=101) return (n-10);
}

int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n==0) break;
        long long int value=f91(n);
        if(value<91) value=91;
        cout<<"f91("<<n<<") = "<<value<<endl;
    }
    return 0;
}

