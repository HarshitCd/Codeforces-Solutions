#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<int, int> m;
    int a, b;
    for(int i=0; i<n-1; i++){
        cin>>a>>b;
        m[a]++;
        m[b]++;
    }
    a=0;
    for(auto x: m){
        if(x.second==1) a++;
    }
    cout<<a;
    return 0;
}
