#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, i=0;
    map<char, int> m;
    string s;
    cin>>n>>k>>s;
    for(auto x: s){
        m[x]++;
        if(m[x]>k){
            i++;
            cout<<"NO";
            break;
        }
    }
    if(i==0) cout<<"YES";
    return 0;
}
