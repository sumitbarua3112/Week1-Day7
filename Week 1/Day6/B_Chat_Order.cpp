#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n;
        cin>>n;
        map<string,ll>mp;
        vector<string>v;
        while(n--)
        {
            string s;
            cin>>s;
           v.push_back(s);

        }
        reverse(v.begin(),v.end());
        for(auto i:v)
        {
            if(mp[i]==0){
            cout<<i<<endl;
            }
            mp[i]++;
        }
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
      solve();
    
}
