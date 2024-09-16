//complexity O(N)
#include<bits/stdc++.h>
using namespace std;

int fibn(int n)
{
    if (n == 1 || n == 2)  
        return 1;

    return fibn(n - 1) + fibn(n - 2);  
}

int main()
{
    int n;
    cin >> n;

    int res = fibn(n);  
    cout << res << endl;  

    return 0;
}
