#include <bits/stdc++.h>
#define lli long long int
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
using namespace std;


void solve()
{
    long long  n,n1;
    cin>>n;
    int f=0;
    n=n+1;
    long long a[n]={0};
    for(int i=1;i<=n;i++)
    {
       
        cin>>n1;
        a[n1]=1;
        if(i>1)
        {
            if(i==n)
            {
                if(a[n1-1]==0)
                {
                    cout<<"NO"<<endl;
                    return;
                } 
            }
          
           else if(a[n1-1]==0 || a[n1+1]==0 )
           {
            
            break;
           }
           else
           {
            cout<<"NO"<<endl;
            return;
           }
        }

    }

    cout<<"YES"<<endl;

}

signed main()
{
   
    fastIO;
    int t=1;
    cin >> t;

    while(t--){
        solve();
    }
}