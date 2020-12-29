#include<iostream>
#include<vector>
#include<cctype>
#include<cmath>
#include<algorithm>
using namespace std;

vector<int> stringOne(string str)
{
    vector<int>v1,returnedV;
    int counter=0,len=0;
    for(int i=0;i<str.length();i++)
    {
        if(isdigit(str[i]))len++;
        if(isspace(str[i]))
        {
            int sum=0;
            if(len)
            {
                int power=len-1;
                int j=i-len;
                while(len--)
                {
                    sum=sum+((str[j]-'0')*pow(10,power));
                    j++;
                    power--;
                }
                v1.push_back(sum);
                len=0;
            }
        }
        if(i==str.length()-1 && len)
        {
            int sum=0;
            int power=len-1;
            int j=i-len+1;
            while(len--)
            {
                sum=sum+((str[j]-'0')*pow(10,power));
                j++;
                power--;
            }
            v1.push_back(sum);
            len=0;
        }
    }
    returnedV.push_back(v1[0]);
    for(int i=1;i<v1.size();i++)
    {
        int value=v1[i-1];
        if(v1[i]!=value)returnedV.push_back(v1[i]);

    }
    return returnedV;
}

bool binarySearch(vector<int>first,int value)
{
    int upperbound=first.size()-1;
    int lowerbound=0;
    while(lowerbound<=upperbound)
    {
        int midpoint=lowerbound+(upperbound-lowerbound)/2;
        if(first[midpoint]==value) return true;
        if(first[midpoint]<value) lowerbound=midpoint+1;
        else upperbound=midpoint-1;
    }
    return false;
}


int similarity(vector<int>v1,vector<int>v2)
{
    int value=0;
    for(int i=0;i<v2.size();i++)
    {
        value+=binarySearch(v1,v2[i]);
    }
    if(value==v1.size())return 1;
    else if(value==0) return 2;
    else return 3;
}

int subsetOfA(vector<int>v1,vector<int>v2)
{
    int value=0;
    for(int i=0;i<v2.size();i++)
    {
        value+=binarySearch(v1,v2[i]);
    }
    if(value==v2.size()) return 1;
    else if(value==0) return 2;
    else return 3;
}


int subsetOfB(vector<int>v2,vector<int>v1)
{
    int value=0;
    for(int i=0;i<v1.size();i++) value+=binarySearch(v2,v1[i]);
    if(value==v1.size()) return 1;
    else if(value==0) return 2;
    else return 3;
}


int main()
{
    vector<int>v1,v2;
    string str1,str2;
    while(getline(cin,str1))
    {
        getline(cin,str2);
        v1=stringOne(str1);
        v2=stringOne(str2);
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1.size()==v2.size())
        {
            int value=similarity(v1,v2);
            if(value==1) cout<<"A equals B"<<endl;
            if(value==2) cout<<"A and B are disjoint"<<endl;
            if(value==3) cout<<"I'm confused!"<<endl;
        }
        else if(v1.size()>v2.size())
        {
            int value=subsetOfA(v1,v2);
            if(value==1) cout<<"B is a proper subset of A"<<endl;
            if(value==2) cout<<"A and B are disjoint"<<endl;
            if(value==3) cout<<"I'm confused!"<<endl;
        }
        else if(v2.size()>v1.size())
        {
            int value=subsetOfB(v2,v1);
            if(value==1) cout<<"A is a proper subset of B"<<endl;
            if(value==2) cout<<"A and B are disjoint"<<endl;
            if(value==3) cout<<"I'm confused!"<<endl;

        }
    }

    return 0;
}

