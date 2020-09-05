#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m, j, k;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>m>>s;
        vector<long long> v(26);
        vector<int> p(m);
        k=0; j=0;
        for(int i=0; i<m; i++) cin>>p[i];
        sort(p.begin(), p.end());
        for(int x: p){
            for(int i=j; i<x; i++){
                v[s[i]-'a'] += (m-k);
            }
            k++;
            j=x;
        }
        for(char x: s) v[x-'a']++;
        for(long long x: v) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
