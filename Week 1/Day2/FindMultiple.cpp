#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int a,b,c;
   cin>>a>>b>>c;
   int f=0,ans;
   for(int i=a; i<=b; ++i) {
     if(i%c==0)
     {
      f=1;
      ans=i;
      break;
     }
   }
   if(f==1)
   {
      cout<<ans<<endl;
   }
   else{
      cout<<-1<<endl;
   }
  return 0;
}

