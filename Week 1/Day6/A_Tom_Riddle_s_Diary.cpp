#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
    {
        ll n;
        cin>>n;
        map<string,ll>mp;
        while(n--)
        {
            string s;
            cin>>s;
            if(mp[s]>0)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
             mp[s]++;
        }
        
    }
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
        solve();
}
