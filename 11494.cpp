#include<iostream>
#include<cmath>
using namespace std;

int diagonalCheck(int a,int b,int c,int d)
{
    if(abs(a-c)==abs(b-d)) return 1;
    else if((a==c) && (b!=d)) return 1;
    else if(a!=c && b==d) return 1;
    else return 0;
}

int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0 && b==0 && c==0 && d==0) break;
        if(a==c && b==d) cout<<"0"<<endl;
        else if(diagonalCheck(a,b,c,d)) cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
    return 0;
}

