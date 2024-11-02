#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    if(n==4)
    {
        cout<<s<<endl;
    }
    else{
        for(int i=0; i<4-n; ++i) {
          cout<<0;
        }
        cout<<s<<endl;
    }
    return 0;
}