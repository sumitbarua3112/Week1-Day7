#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n ;
        cin>>n;
        vector<ll> v(2*n);
        ll a=0,b=0;
        for(int i=0; i<2*n; ++i) {
            cin>>v[i]; 
            if(v[i]==1)
            {
                a++;
            }
            else{
                b++;
            }
        }
        ll ans2=min(a,b);
        if(a%2==0)
        {
            cout<<0<<" ";
        }
        else{
            cout<<1<<" ";
        }
        cout<<ans2<<endl;

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
