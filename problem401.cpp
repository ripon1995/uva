#include<iostream>
#include<vector>
using namespace std;

char arr1[]={'A','E','H','I','J','L','M','O','S','T','U','V','W','X','Y','Z','1','2','3','5','8'};
char arr2[]={'A','3','H','I','L','J','M','O','2','T','U','V','W','X','Y','5','1','S','E','Z','8'};

bool isPalindrome(string str)
{
    int counter=0;
    vector<char>v;
    for(int i=str.length()-1;i>=0;i--) v.push_back(str[i]);
    for(int i=0;i<str.length();i++) if(str[i]!=v[i]) counter++;
    if(counter==0) return true;
    else return false;
}


int findLetterPosition(char ch)
{
    int counter=0;
    for(int i=0;i<arr1[i];i++)
    {
        if(arr1[i]==ch)break;
        counter++;
    }
    return counter;
}

bool isMirroredString(string str)
{
    int counter=0;
    vector<char>v;
    for(int i=str.length()-1;i>=0;i--)v.push_back(str[i]);
    for(int i=0;i<str.length();i++)
    {
        int position=findLetterPosition(str[i]);
        if(str[i]!=arr1[position] || v[i]!=arr2[position]) counter++;
    }
    if(counter==0) return true;
    else return false;
}

int main()
{
    string str;
    while(getline(cin,str))
    {
        if(cin.eof())break;
        if(isPalindrome(str) && !isMirroredString(str)) cout<<str<<" -- is a regular palindrome."<<endl;
        else if(!isPalindrome(str) && isMirroredString(str)) cout<<str<<" -- is a mirrored string."<<endl;
        else if(isPalindrome(str)&&isMirroredString(str)) cout<<str<<" -- is a mirrored palindrome."<<endl;
        else cout<<str<<" -- is not a palindrome."<<endl;
        cout<<endl;
    }
    return 0;
}

