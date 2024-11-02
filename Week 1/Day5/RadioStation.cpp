#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll n,m;
   cin>>n>>m;
   map<string,string>mp;
   for(int i=0; i<n; ++i) {
    string a,b;
    cin>>a>>b;
    mp[b]=a;
   }
    for(int i=0; i<m; ++i) {
    string s,s1;
    cin>>s>>s1;
    s1.pop_back();
    cout<<s<<" "<<s1<<"; #"<<mp[s1]<<endl;
   }
  return 0;
}

