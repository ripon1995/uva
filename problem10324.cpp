#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    string str;
    int a,b,n,key=1;
    while(getline(cin, str))
    {
        if(str.empty()) break;
        cin>>n;
        cout<<"Case "<<key<<":"<<endl;
        for(int i=1;i<=n;i++)
        {
            cin>>a>>b;
            if(a>b) swap(a,b);
            int counter=1;
            char c;
            while(c=getchar()) if(c=='\n') break;//cause after the inputting of two integer the line may not be end
            char ch=str[a];
            for(int j=a+1;j<=b;j++)
            {
                if(str[j]!=ch) counter=0;
            }
            if(counter==1) cout<<"Yes"<<endl;
            if(counter==0) cout<<"No"<<endl;
        }
        key++;
    }

    return 0;
}


