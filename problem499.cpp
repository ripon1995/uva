#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;

int main()
{
    vector<int>v,vs;
    vector<char>chC,chS;
    for(int i=65;i<91;i++)
    {
        chC.push_back((char)i);
        chS.push_back((char)(i+32));
    }
    string st;
    while(getline(cin,st))
    {
        if(cin.eof())break;
        v.assign(26,0);
        vs.assign(26,0);
        int counter=-1;
        for(int i=0;i<st.length();i++)
        {
            if(st[i]=='A')
            {
                v[0]=v[0]+1;
                if(v[0]>counter) counter=v[0];
            }
            else if(st[i]=='a')
            {
                vs[0]=vs[0]+1;
                if(vs[0]>counter)counter=vs[0];
            }
            else if(st[i]=='B')
            {
                v[1]=v[1]+1;
                if(v[1]>counter)counter=v[1];

            }
            else if(st[i]=='b')
            {
                vs[1]=vs[1]+1;
                if(vs[1]>counter)counter=vs[1];
            }
            else if(st[i]=='C')
            {
                v[2]=v[2]+1;
                if(v[2]>counter)counter=v[2];
            }
            else if(st[i]=='c')
            {
                vs[2]=vs[2]+1;
                if(vs[2]>counter)counter=vs[2];
            }
            else if(st[i]=='D')
            {
                v[3]=v[3]+1;
                if(v[3]>counter)counter=v[3];
            }
            else if(st[i]=='d')
            {
                vs[3]=vs[3]+1;
                if(vs[3]>counter)counter=vs[3];
            }
            else if(st[i]=='E')
            {
                v[4]=v[4]+1;
                if(v[4]>counter)counter=v[4];
            }
            else if(st[i]=='e')
            {
                vs[4]=vs[4]+1;
                if(vs[4]>counter)counter=vs[4];
            }
            else if(st[i]=='F')
            {
                v[5]=v[5]+1;
                if(v[5]>counter)counter=v[5];
            }
            else if(st[i]=='f')
            {
                vs[5]=vs[5]+1;
                if(vs[5]>counter)counter=vs[5];
            }
            else if(st[i]=='G')
            {
                v[6]=v[6]+1;
                if(v[6]>counter)counter=v[6];
            }

            else if(st[i]=='g')
            {
                vs[6]=vs[6]+1;
                if(vs[6]>counter)counter=vs[6];
            }
            else if(st[i]=='H')
                {
                    v[7]=v[7]+1;
                    if(v[7]>counter)counter=v[7];
                }
            else if(st[i]=='h')
            {
                vs[7]=vs[7]+1;
                if(vs[7]>counter)counter=vs[7];
            }
            else if(st[i]=='I')
            {
                v[8]=v[8]+1;
                if(v[8]>counter)counter=v[8];
            }
            else if(st[i]=='i')
            {
                vs[8]=vs[8]+1;
                if(vs[8]>counter)counter=vs[8];
            }
            else if(st[i]=='J')
            {
                v[9]=v[9]+1;
                if(v[9]>counter)counter=v[9];
            }
            else if(st[i]=='j')
            {
                vs[9]=vs[9]+1;
                if(vs[9]>counter)counter=vs[9];
            }
            else if(st[i]=='K')
            {
                v[10]=v[10]+1;
                if(v[10]>counter)counter=v[10];
            }
            else if(st[i]=='k')
            {
                vs[10]=vs[10]+1;
                if(vs[10]>counter)counter=vs[10];
            }
            else if(st[i]=='L')
            {
                v[11]=v[11]+1;
                if(v[11]>counter)counter=v[11];
            }
            else if(st[i]=='l')
            {
                vs[11]=vs[11]+1;
                if(vs[11]>counter)counter=vs[11];
            }
            else if(st[i]=='M')
            {
                v[12]=v[12]+1;
                if(v[12]>counter)counter=v[12];
            }
            else if(st[i]=='m')
            {
                vs[12]=vs[12]+1;
                if(vs[12]>counter)counter=vs[12];
            }
            else if(st[i]=='N')
            {
                v[13]=v[13]+1;
                if(v[13]>counter)counter=v[13];
            }
            else if(st[i]=='n')
            {
                vs[13]=vs[13]+1;
                if(vs[13]>counter)counter=vs[13];
            }
            else if(st[i]=='O')
            {
                v[14]=v[14]+1;
                if(v[14]>counter)counter=v[14];
            }
            else if(st[i]=='o')
            {
                vs[14]=vs[14]+1;
                if(vs[14]>counter)counter=vs[14];
            }
            else if(st[i]=='P')
            {
                v[15]=v[15]+1;
                if(v[15]>counter)counter=v[15];
            }
            else if(st[i]=='p')
            {
                vs[15]=vs[15]+1;
                if(vs[15]>counter)counter=vs[15];
            }
            else if(st[i]=='Q')
            {
                v[16]=v[16]+1;
                if(v[16]>counter)counter=v[16];
            }
            else if(st[i]=='q')
            {
                vs[16]=vs[16]+1;
                if(vs[16]>counter)counter=vs[16];
            }
            else if(st[i]=='R')
            {
                v[17]=v[17]+1;
                if(v[17]>counter)counter=v[17];
            }
            else if(st[i]=='r')
            {
                vs[17]=vs[17]+1;
                if(vs[17]>counter)counter=vs[17];
            }
            else if(st[i]=='S')
            {
                v[18]=v[18]+1;
                if(v[18]>counter)counter=v[18];
            }
            else if(st[i]=='s')
            {
                vs[18]=vs[18]+1;
                if(vs[18]>counter)counter=vs[18];
            }
            else if(st[i]=='T')
            {
                v[19]=v[19]+1;
                if(v[19]>counter)counter=v[19];
            }
            else if(st[i]=='t')
            {
                vs[19]=vs[19]+1;
                if(vs[19]>counter)counter=vs[19];
            }
            else if(st[i]=='U')
            {
                v[20]=v[20]+1;
                if(v[20]>counter)counter=v[20];
            }
            else if(st[i]=='u')
            {
                vs[20]=vs[20]+1;
                if(vs[20]>counter)counter=vs[20];
            }
            else if(st[i]=='V')
            {
                v[21]=v[21]+1;
                if(v[21]>counter)counter=v[21];
            }
            else if(st[i]=='v')
            {
                vs[21]=vs[21]+1;
                if(vs[21]>counter)counter=vs[21];
            }
            else if(st[i]=='W')
            {
                v[22]=v[22]+1;
                if(v[22]>counter)counter=v[22];
            }
            else if(st[i]=='w')
            {
                vs[22]=vs[22]+1;
                if(vs[22]>counter)counter=vs[22];
            }
            else if(st[i]=='X')
            {
                v[23]=v[23]+1;
                if(v[23]>counter)counter=v[23];
            }
            else if(st[i]=='x')
            {
                vs[23]=vs[23]+1;
                if(vs[23]>counter)counter=vs[23];
            }
            else if(st[i]=='Y')
            {
                v[24]=v[24]+1;
                if(v[24]>counter)counter=v[24];
            }
            else if(st[i]=='y')
            {
                vs[24]=vs[24]+1;
                if(vs[24]>counter)counter=vs[24];
            }
            else if(st[i]=='Z')
            {
                v[25]=v[25]+1;
                if(v[25]>counter)counter=v[25];
            }
            else if(st[i]=='z')
            {
                vs[25]=vs[25]+1;
                if(vs[25]>counter)counter=vs[25];
            }
        }
        for(int i=0;i<chC.size();i++)if(v[i]==counter)cout<<chC[i];
        for(int i=0;i<chS.size();i++)if(vs[i]==counter) cout<<chS[i];
        cout<<" "<<counter<<endl;
    }
    return 0;
}

