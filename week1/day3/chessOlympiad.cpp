#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y,z,op=0,you=0;
	cin>>x>>y>>z;
	you=x+y*0.5;
	op=y*0.5+z;
	int rem = 4 - (x + y + z);
	if(rem+you >op   )
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;

}
