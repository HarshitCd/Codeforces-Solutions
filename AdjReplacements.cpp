#include<bits/stdc++.h>
using namespace std;

void Adj_Replacement(vector<int>& v){
    const int inf = 1e9+5;
    int m=v[0], n;
    for(auto x: v){
        if(m<x) m=x;
    }
    n = (m%2)==0?-1:0;
    for(int i=0; i<v.size(); i++){
        if(v[i]==m) v[i]+=n;
        else if(v[i]%2==0) --v[i];
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    if(n!=0) Adj_Replacement(v);
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
    return 0;
}
