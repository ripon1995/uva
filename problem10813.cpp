#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

void printData(vector<int>v)
{
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
}
vector<int> replaceValue(int value,vector<int>v)
{
    for(int i=0;i<5;i++)if(v[i]==value)v[i]=0;
    return v;
}


bool traverseValue(vector<int>r1,vector<int>r2,vector<int>r3,vector<int>r4,vector<int>r5,vector<int>c1,vector<int>c2,vector<int>c3,vector<int>c4,vector<int>c5,vector<int>d1,vector<int>d2)
{
    if(r1[0]==0 && r1[1]==0&& r1[2]==0&& r1[3]==0&& r1[4]==0) return true;
    else if(r2[0]==0 && r2[1]==0&& r2[2]==0&& r2[3]==0&& r2[4]==0) return true;
    else if(r3[0]==0 && r3[1]==0&& r3[2]==0&& r3[3]==0&& r3[4]==0) return true;
    else if(r4[0]==0 && r4[1]==0&& r4[2]==0&& r4[3]==0&& r4[4]==0) return true;
    else if(r5[0]==0 && r5[1]==0&& r5[2]==0&& r5[3]==0&& r5[4]==0) return true;
    else if(c1[0]==0 && c1[1]==0&& c1[2]==0&& c1[3]==0&& c1[4]==0) return true;
    else if(c2[0]==0 && c2[1]==0&& c2[2]==0&& c2[3]==0&& c2[4]==0) return true;
    else if(c3[0]==0 && c3[1]==0&& c3[2]==0&& c3[3]==0&& c3[4]==0) return true;
    else if(c4[0]==0 && c4[1]==0&& c4[2]==0&& c4[3]==0&& c4[4]==0) return true;
    else if(c5[0]==0 && c5[1]==0&& c5[2]==0&& c5[3]==0&& c5[4]==0) return true;
    else if(d1[0]==0 && d1[1]==0&& d1[2]==0&& d1[3]==0&& d1[4]==0) return true;
    else if(d2[0]==0 && d2[1]==0&& d2[2]==0&& d2[3]==0&& d2[4]==0) return true;
    else return 0;
}



int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        vector<int>r1,r2,r3,r4,r5,c1,c2,c3,c4,c5,d1,d2;
        for(int i=1;i<=24;i++)
        {
            int value;
            cin>>value;
            if(i>=1 && i<=5)
            {
                r1.push_back(value);
                if(i==1)c1.push_back(value);
                if(i==2)c2.push_back(value);
                if(i==3)c3.push_back(value);
                if(i==4)c4.push_back(value);
                if(i==5)c5.push_back(value);
                if(i==1)d1.push_back(value);
                if(i==5)d2.push_back(value);
            }
            else if(i>=6&&i<=10)
            {
                r2.push_back(value);
                if(i==6)c1.push_back(value);
                if(i==7)c2.push_back(value);
                if(i==8)c3.push_back(value);
                if(i==9)c4.push_back(value);
                if(i==10)c5.push_back(value);
                if(i==7)d1.push_back(value);
                if(i==9)d2.push_back(value);
            }
            else if(i>=11 && i<=14)
            {
                r3.push_back(value);
                if(i==12)
                {
                    r3.push_back(0);
                    c3.push_back(0);
                    d1.push_back(0);
                    d2.push_back(0);
                }

                if(i==11)c1.push_back(value);
                if(i==12)c2.push_back(value);
                if(i==13)c4.push_back(value);
                if(i==14)c5.push_back(value);
            }
            else if(i>=15 && i<=19)
            {
                r4.push_back(value);
                if(i==15)c1.push_back(value);
                if(i==16)c2.push_back(value);
                if(i==17)c3.push_back(value);
                if(i==18)c4.push_back(value);
                if(i==19)c5.push_back(value);
                if(i==18)d1.push_back(value);
                if(i==16)d2.push_back(value);
            }
            else if(i>=20 && i<=24)
            {
                r5.push_back(value);
                if(i==20)c1.push_back(value);
                if(i==21)c2.push_back(value);
                if(i==22)c3.push_back(value);
                if(i==23)c4.push_back(value);
                if(i==24)c5.push_back(value);
                if(i==24)d1.push_back(value);
                if(i==20)d2.push_back(value);
            }
        }
        int counter=0;
        int check=0;
        for(int i=1;i<=75;i++)
        {
            if((traverseValue(r1,r2,r3,r4,r5,c1,c2,c3,c4,c5,d1,d2))&&check==0)check=counter;
            int value;
            cin>>value;
            if(!check)
            {
                r1=replaceValue(value,r1);
                r2=replaceValue(value,r2);
                r3=replaceValue(value,r3);
                r4=replaceValue(value,r4);
                r5=replaceValue(value,r5);
                c1=replaceValue(value,c1);
                c2=replaceValue(value,c2);
                c3=replaceValue(value,c3);
                c4=replaceValue(value,c4);
                c5=replaceValue(value,c5);
                d1=replaceValue(value,d1);
                d2=replaceValue(value,d2);
            }
            counter++;
        }

        cout<<"BINGO after "<<check<<" numbers announced"<<endl;
    }
    return 0;
}

