#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int f=0;
     for(char i='a'; i<='z'; i++) {
      auto it=find(s.begin(),s.end(),i);
      if(it==s.end())
      {
        cout<<i<<endl;
        f=1;
        break;
      }
     }
     if(f==0){
     cout<<"None"<<endl;
     }
    return 0;
}