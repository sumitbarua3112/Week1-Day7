#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      string s;
      cin>>s;
      int a=-1,b=-1;
      a=s.find('B');
      b=s.rfind('B');
      int ans=b-a+1;
      cout<<ans<<endl;
   }
  return 0;
}

