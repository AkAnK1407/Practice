#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int x,y,z,opt=0,you=0;
	cin>>x>>y>>z;
	you=x+y*0.5;
	opt=y*0.5+z;
	int rem = 4 - (x + y + z);
	if(rem+you >opt )
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;

}
