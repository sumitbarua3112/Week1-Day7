#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ;
        cin>>n;
        vector<ll>v(n);
        map<ll,ll>mp;
        for(int i=0; i<n; ++i) {
            cin>>v[i];
        }
        ll ans=n;
        sort(v.begin(),v.end());
        for(int i=0; i<n; ++i) {
            ll k=i;
          for(int j=i; j<n; ++j) {
          if(v[k]<v[j] && mp[j]==0)
          {
            mp[j]++;
            ans--;
            break;
          }  
          }
        }
        cout<<ans<<endl;
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
   
        solve();
    
}
