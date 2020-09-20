#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans=0;
    string s, t;
    cin>>n>>s>>t;
    vector<pair<int, char>> v(n);

    for(int i=0; i<n; i++){
        if(s[i]==t[i]){
            v[i].first = 0;
            v[i].second = '.';
        }
        else{
            v[i].first = 1;
            v[i].second = s[i];
        }
    }

    for(int i=0; i<n; i++){
        if(v[i].first){
            if(i+1<n && v[i+1].first && v[i].second!=v[i+1].second){ans++; i++;}
            else ans++;
        }
    }
    cout<<ans;
    return 0;
}
