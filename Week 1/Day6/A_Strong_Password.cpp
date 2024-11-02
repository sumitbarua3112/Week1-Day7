#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        string s1,s2="";
        cin>>s1;
        ll f=0,j;
       
        for(int i=0; i<s1.size(); i++) {
          if(s1[i]==s1[i+1] && f==0)
          {
            if(s1[i]=='z')
            {
            s2+=s1[i];
            s2+='a';
            f=1;  
            }
            else{
             s2+=s1[i];
            s2+=s1[i]+1;
            f=1;
            }
          }
          else{
            s2+=s1[i];
          }
          j=i;
        }
        if(f==0)
        {
            if(s1[j]=='z')
            {
                s2+='a';
              cout<<s2<<endl;
            }
            else{
                s2+=s1[j]+1;
            cout<<s2<<endl;
            }
        }
        else{
            cout<<s2<<endl;
        }

        
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    ll t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
