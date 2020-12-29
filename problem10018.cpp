#include<iostream>
#include<vector>
using namespace std;

int counter=0;
vector<int>v;

bool isPalindrome(long long int n)
{
    vector<int>reverseV;
    while(n>0)
    {
        v.push_back(n%10);
        n=n/10;
    }
    int counter1=0;
    for(int i=v.size()-1;i>=0;i--) reverseV.push_back(v[i]);
    for(int i=0;i<v.size();i++)if(v[i]!=reverseV[i]) counter1++;
    reverseV.clear();
    v.clear();
    if(counter1==0) return true;
    else return false;
}

long long int newNumber(long long int n)
{
    counter++;
    while(n>0)
    {
        v.push_back(n%10);
        n=n/10;
    }
    vector<int>reverseV;
    long long int sum=0,strSum=0,vectorSum=0;
    for(int i=v.size()-1;i>=0;i--) reverseV.push_back(v[i]);
    int key=1;
    for(int i=v.size()-1;i>=0;i--)
    {
        strSum=strSum+((reverseV[i])*key);
        vectorSum=vectorSum+((v[i])*key);
        key=key*10;
    }
    sum=strSum+vectorSum;
    v.clear();
    reverseV.clear();
    return sum;
}

int main()
{
    int tc;
    long long int number,n;
    cin>>tc;
    while(tc--)
    {
        cin>>number;
        n=newNumber(number);
        while(1)
        {
            if(!isPalindrome(n)) n=newNumber(n);
            else
            {
                cout<<counter<<" "<<n<<endl;
                counter=0;
                break;
            }
        }
    }
    return 0;
}

