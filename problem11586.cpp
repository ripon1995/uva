
#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    string str;
    int t,counter1,counter2;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,str);
        counter1=0,counter2=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='M') counter1++;
            if(str[i]=='F') counter2++;
        }
        if((counter1==counter2)&& counter1!=1) cout<<"LOOP"<<endl;
        else cout<<"NO LOOP"<<endl;
    }
    return 0;
}

