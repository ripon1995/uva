#include<iostream>
#include<vector>
#include<cstring>
#include<cstdio>
using namespace std;


vector<string> nameOfMembers(int person)
{
    vector<string>name;
    char personName[100];
    for(int i=0;i<person;i++)
    {
        scanf("%s", personName);
        name.push_back(personName);
    }
    return name;
}


int main()
{
    int person,k=0;
    char personName[100];
    vector<string>name,recieverName;
    while(cin>>person)
    {
        if(cin.eof()) break;
        if(k>0) cout<<endl;
        vector<int>amount(person,0);
        name=nameOfMembers(person);

        for(int key=0;key<name.size();key++)
        {
            string donor;
            int money,reciever;
            cin>>donor;
            cin>>money>>reciever;
            getchar();
            recieverName=nameOfMembers(reciever);
            for(int i=0;i<name.size();i++)
            {
                if(reciever!=0)if(donor==name[i])amount[i]=amount[i]-money+(money%reciever);
                if(reciever!=0)for(int j=0;j<recieverName.size();j++)if(name[i]==recieverName[j])amount[i]=amount[i]+(money/reciever);
            }
        }
        for(int i=0;i<name.size();i++) cout<<name[i]<<" "<<amount[i]<<endl;
        name.clear();
        recieverName.clear();
        amount.clear();
        k++;

    }
    return 0;
}

