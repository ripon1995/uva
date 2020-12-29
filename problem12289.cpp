#include<cstring>
//#include<sstream>
#include<iostream>
#include<cstdio>
using namespace std;

char ONE[5]="one";
char TWO[5]="two";

int recognizeNumber(string st)
{
    int counterOne=0,counterTwo=0;
    if(st.length()==3)
    {
        for(int i=0;i<strlen(ONE);i++) if(st[i]==ONE[i]) counterOne++;
        for(int i=0;i<strlen(TWO);i++) if(st[i]==TWO[i]) counterTwo++;
        if(counterOne>=2) return 1;
        else return 2;
    }
    if(st.length()==5) return 3;
}

int main()
{
    int n;
    string st;
    cin>>n;
    getchar();
    while(n--)
    {
        getline(cin,st);
        cout<<recognizeNumber(st)<<endl;
    }
    return 0;
}

