#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x); 
    }
    for(auto i:v){
        s+=i;
    }
    cout<<s<<endl;
    return 0;
}
