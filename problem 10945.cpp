#include<iostream>
#include<vector>
#include<cctype>
using namespace std;

bool isPalindrome(vector<char>v)
{
    vector<char>revV;
    for(int i=v.size()-1;i>=0;i--) revV.push_back(v[i]);
    int counter=0;
    for(int i=0;i<v.size();i++) if(revV[i]!=v[i]) counter++;
    revV.clear();
    if(counter==0) return true;
    else return false;
}

int main()
{
    vector<char>v;
    string str;
    while(getline(cin,str))
    {
        if(str=="DONE")break;
        for(int i=0;i<str.length();i++)
        {
            if(isalpha(str[i]))
            {
                if(isupper(str[i]))str[i]=tolower(str[i]);
                v.push_back(str[i]);
            }
        }
        if(isPalindrome(v))cout<<"You won't be eaten!"<<endl;
        else cout<<"Uh oh.."<<endl;
        v.clear();
    }
    return 0;
}

