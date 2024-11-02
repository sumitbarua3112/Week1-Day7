#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,string>s1,s2;
    for(int i=1; i<=n; ++i) {
      string a,b;
      cin>>a>>b;
        if(s2.find(a)!=s2.end())
        {
            string c=s2[a];
            s1[c]=b;
            s1.erase(b);
            s2[b]=c;
        }
        else{
            s1[a]=b;
            s2[b]=a;
        }
    }
   cout<<s1.size()<<endl;
   for(auto i:s1)
   {
      cout<<i.first<<" "<<i.second<<endl;
   }
    return 0;
}