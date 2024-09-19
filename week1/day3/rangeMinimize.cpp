#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    vector<long long>v;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    
	    sort(v.begin(),v.end());
 if (n <= 3) {
            cout << 0 << endl;
        }
        else{
              long long m = INT_MAX;
		// Case 1: Remove two elements from the back (largest two)
        m = min(m, v[n-3] - v[0]);
	 	// Case 2: Remove two elements from the front (smallest two)
        m = min(m, v[n-1] - v[2]);
		// Case 3: Remove one from the front and one from the back
        m = min(m, v[n-2] - v[1]);
        cout<< m ;
		cout<< endl;
            
        }
    }
    
    return 0;
}