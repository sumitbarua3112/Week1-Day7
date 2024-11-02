#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll t;
   cin>>t;
   map<string,ll>mp;
   while(t--)
   {
   string s;
   cin>>s;
   if(mp.find(s)!=mp.end())
   {
       ll n=mp[s];
      cout<<s<<n<<endl;
   }
   else{
      cout<<"OK"<<endl;
   }
   mp[s]++;
   }
  return 0;
}

