#include<iostream>
using namespace std;

int main()
{
    string st;
    while(getline(cin,st))
    {
        for(int i=0;i<st.length();i++)cout<<(char)(((int)st[i])-7);
        cout<<endl;
    }
    return 0;
}
