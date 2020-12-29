#include<iostream>
#include<cctype>
using namespace std;

int wordCOunter(string str)
{
    int counter=0,len=0;
    for(int i=0;i<str.length();i++)
    {
        if(isalpha(str[i]))len++;
        if(!isalpha(str[i]) || i==str.length()-1)
        {
            if(len)counter++;
            len=0;
        }
    }
    return counter;
}

int main()
{
    string str;
    while(getline(cin,str))
    {
        cout<<wordCOunter(str)<<endl;
    }
    return 0;
}

