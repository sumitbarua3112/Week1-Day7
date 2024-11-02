#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        set<char>st;
        vector<char>a;
        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]);
        }

         for(auto i:st)
        {
            a.push_back(i);
        }
        map<char,char>mp;
        ll x=a.size();
        for(int i=0;i<a.size();i++)
        {
            mp[a[i]]=a[x-i-1];
        }
        for(int i=0;i<n;i++)
        {
            cout<<mp[s[i]];
        }
        cout<<endl;
    }
}
