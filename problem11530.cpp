#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int tc,testCase=0;
    string st;
    cin>>tc;
    getchar();
    while(tc--)
    {
        getline(cin,st);
        int sum=0;
        for(int i=0;i<st.length();i++)
        {
            if(st[i]=='a'||st[i]=='d'||st[i]=='g'||st[i]=='j'||st[i]=='m'||st[i]=='p'||st[i]=='t'||st[i]=='w' || st[i]==' ')sum++;
            else if(st[i]=='b'||st[i]=='e'||st[i]=='h'||st[i]=='k'||st[i]=='n'||st[i]=='q'||st[i]=='u'||st[i]=='x')sum=sum+2;
            else if(st[i]=='c'||st[i]=='f'||st[i]=='i'||st[i]=='l'||st[i]=='o'||st[i]=='r'||st[i]=='v'||st[i]=='y')sum+=3;
            else if(st[i]=='s'||st[i]=='z')sum+=4;
        }
        cout<<"Case #"<<++testCase<<": "<<sum<<endl;
    }
    return 0;
}

