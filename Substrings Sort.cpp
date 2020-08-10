#include<bits/stdc++.h>
using namespace std;

bool stringMatching(string s, string t, int n, int m){
    int k;
    //cout<<s<<" "<<t<<endl;
    for(int i=0; i<=m-n; i++){
        for(k=0; k<n && t[i+k]==s[k]; k++)
        if(k==n) return true;
    }
    return false;
}

int main(){
    string s;
    int n, i, j;
    vector<pair<int, string>> v;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>s;
        v.push_back(make_pair(s.size(), s));
    }
    sort(v.begin(), v.end());
    for(i=0; i<n-1; i++){
        if(!stringMatching(v[i].second, v[i+1].second, v[i].first, v[i+1].first)){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES\n";
    for(auto x: v){
        cout<<x.second<<endl;
    }
    return 0;
}
