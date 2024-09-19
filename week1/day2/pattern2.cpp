#include<bits/stdc++.h>
using namespace std;

void getNumberPattern(int n) {
    // Write your code here.
    
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left =j;
            int bottom = (2*n-1)-1-i;
            int right=(2*n-1)-1-j;
            cout<<(n-min(min(left, right),min(top,bottom)));
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    getNumberPattern(n);
    return 0;
}