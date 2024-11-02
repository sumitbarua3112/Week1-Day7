#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ,s=0;
        cin>>n;
        vector<ll>v;
        for(int i=0; i<n; ++i) {
            ll a;
            cin>>a;
            if(a%2==0)
            {
                s+=a;
            } 
            else{
                v.push_back(a);
            }
        }
        sort(v.begin(),v.end(),greater<ll>());
        ll m=v.size();
        for(int i=0; i<v.size(); i+=2) {
          if(m>=2)
          {
            s+=v[i];
            s+=v[i+1];
            m-=2;
          }
          else{
            break;
          }
        }
        cout<<s<<endl;

    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);

        solve();
    
}
