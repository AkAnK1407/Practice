#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(auto i:v){
        s+=i;
    }
    cout<<"sum = "<<s<<endl;
    
}
