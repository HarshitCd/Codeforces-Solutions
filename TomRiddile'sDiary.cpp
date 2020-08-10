#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    unordered_map<string, int> m;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        m[s]++;
        if(m[s]>1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
