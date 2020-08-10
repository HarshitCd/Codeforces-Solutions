#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n, k, a;
    long long ans=0;
    vector<int> v;
    cin>>s>>n;
    k=s.size();
    for(int i=0; i<26; i++){
        cin>>a;
        v.push_back(a);
    }
    for(int i=0; i<k; i++){
        ans=ans+(i+1)*v[s[i]-'a'];
        //cout<<v[i]<<" ";
    }
    //cout<<ans<<endl;
    sort(v.rbegin(), v.rend());
    for(int i=0; i<n; i++) ans=ans+v[0]*(i+k+1);
    cout<<ans;
    return 0;
}
