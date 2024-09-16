#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int dataTypeSize(string str) {
    
        if(str=="Character")
        return 1;
        else if(str.compare("Integer")==0)
        return 4;
        else if(str.compare("Float")==0)
        return 4;
        else if(str.compare("Long")==0)
        return 8;
        else if(str.compare("Double")==0)
        return 8;
        else return -1;
        
    }


};


int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}