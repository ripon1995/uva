#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    string st;
    while(getline(cin,st))
    {
        int len=0;
        for(int i=0;i<st.length();i++)
        {
            if(isprint(st[i]))len++;
            if(isspace(st[i]))
            {
                int j=i-1;
                len--;
                while(len--)
                {
                    cout<<st[j];
                    j--;
                }
                len=0;
                cout<<" ";
            }
            if(i==st.length()-1)
            {
                int j=i;
                while(len--)
                {
                    cout<<st[j];
                    j--;
                }
                len=0;
            }
        }
        cout<<endl;
    }
    return 0;
}

