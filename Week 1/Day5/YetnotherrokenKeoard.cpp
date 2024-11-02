#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        vector<int>small,capital;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]>='A' && str[i]<='Z' && str[i]!='B')
                capital.push_back(i);

            if(str[i]>='a' && str[i]<='z' && str[i]!='b')
                small.push_back(i);

           if(str[i]=='B' && !capital.empty())
                {
                    str[capital.back()]='9';
                    capital.pop_back();
                }
            if(str[i]=='b' && !small.empty())
                {
                    str[small.back()]='9';
                    small.pop_back();
                }

        }
        for(int i=0;i<str.size();i++){
            if(str[i]!='B' & str[i]!='b' & str[i]!='9')
            cout<<str[i];
        }
       cout<<endl;
    }
}
