#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n,k;
        cin>>n>>k;
        ll f=0,b;
        for(int i=2; i<n; ++i) {
          if(n%i==0)
          {
            b=i;
            f=1;
            break;
          }
        }
        if(f==0){
        ll m=ceil(n/2.0);
        vector<ll>v(n+1);
       for(int i=1; i<=n; ++i) {
          v[i]=i;
        }
        ll a=0;
        for(int i=1; i<=n; ++i) {
          if(v[m]==k)
          {
            a=1;
            break;
          }
        }
        if(a==1)
        {
            cout<<n<<endl;
          for(int i=1; i<=n; ++i) {
            cout<<v[i]<<" ";
          }cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        }
        else{
          ll c=b/2;
          ll d=n-k;
          if(c<=d)
          {
            cout<<b<<endl;
            for(int i=1; i<=c; ++i) {
              cout<<i<<" ";
            }
            for(int i=k; i<=k+c; ++i) {
              cout<<i<<" ";
            }cout<<endl;

          }
          else{
            cout<<-1<<endl;
          }
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
