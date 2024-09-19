#include <bits/stdc++.h>
#include<stack>
using namespace std;
void solve()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i=i+1;
            }
          
            
        }

       
    }
     cout<<s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while (t--) {
        solve();
    }
  
    return 0;
}
