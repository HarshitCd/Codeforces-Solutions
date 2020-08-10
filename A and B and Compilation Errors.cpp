#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    map<int, int> x, y, z;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        x[a]++;
    }
    for(int i=0; i<n-1; i++){
        cin>>a;
        y[a]++;
    }
    for(auto b: x){
        if(b.second>y[b.first]){cout<<b.first<<endl; break;}
    }
    for(int i=0; i<n-2; i++){
        cin>>a;
        z[a]++;
    }
    for(auto b: y){
        if(b.second>z[b.first]){cout<<b.first<<endl; break;}
    }
    return 0;
}
