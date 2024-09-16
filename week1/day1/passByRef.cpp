#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
      
        vector<int>v(2);
        v[0]=a+1;
        v[1]=b+2;
        return v;
        
    }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        Solution obj;
        vector<int> ans = obj.passedBy(a, b);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}