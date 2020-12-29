#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int l;
    string str;
    while(cin>>l)
    {
        getchar();
        if(l==0) break;
        getline(cin,str);
        int d=0,D=0,r=0,R=0,counter=2000001,dis=2000001;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='D')
            {
                d=i;
                D=1;
            }
            if(str[i]=='R')
            {
                r=i;
                R=1;
            }
            if(D==1 && R==1)
            {
                if(d<r)
                {
                    dis=r-d;
                    D=0;
                }
                if(r<d)
                {
                    dis=d-r;
                    R=0;
                }
            }
            if(str[i]=='Z') dis=0;
            if(dis<counter) counter=dis;
        }
        cout<<counter<<endl;
    }
    return 0;
}

