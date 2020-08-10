#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0, a;
    string s;
    map<char, int> m;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        m[s[0]]++;
    }
    for(auto x: m){
        a=(x.second%2==0)? x.second/2: x.second/2+1;
        c+=(x.second/2)*(x.second/2-1)/2+a*(a-1)/2;
    }
    cout<<c;
    return 0;
}
