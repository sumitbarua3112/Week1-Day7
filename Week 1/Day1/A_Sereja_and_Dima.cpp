#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int  n;
   cin>>n;
   deque<int> d(n);
   for(int i=0; i<n; ++i) {
       cin>>d[i]; 
   }
   int ans1=0,ans2=0,i=1;
   while(!d.empty())
   {
      int a=d.front(),b=d.back(),mx;
      mx=max(a,b);
      if(i%2!=0)
      {
         ans1+=mx;
      }
      else{
         ans2+=mx;
      }
      if(mx==a)
      {
         d.pop_front();
      }
      else{
         d.pop_back();
      }
      i++;
   }
   cout<<ans1<<" "<<ans2<<endl;
  return 0;
}

