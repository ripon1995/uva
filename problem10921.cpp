#include<iostream>
using namespace std;

int main()
{
    string str;
    while(getline(cin,str))
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' ') cout<<endl;
            if(str[i]>='0' && str[i]<='9') cout<<str[i];
            if(str[i]=='-') cout<<str[i];
            if(str[i]>='A'&& str[i]<='C')cout<<"2";
            if(str[i]>='D' && str[i]<='F') cout<<"3";
            if(str[i]>='G' && str[i]<='I') cout<<"4";
            if(str[i]>='J'&& str[i]<='L') cout<<"5";
            if(str[i]>='M' && str[i]<='O') cout<<"6";
            if(str[i]>='P' && str[i]<='S') cout<<"7";
            if(str[i]>='T' && str[i]<='V') cout<<"8";
            if(str[i]>='W' && str[i]<='Z') cout<<"9";
        }
        cout<<endl;
    }
    return 0;
}

