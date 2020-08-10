#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, a, ans=0;
    vector<int> v;
    cin>>n>>k;
    for(int i=2; i<=n; i++){
        a=0;
        for(int j=2; j<=sqrt(i); j++){
            if(i%j==0){a=1; break;}
        }
        if(a==0) v.push_back(i);
    }
    if(k>v.size()){cout<<"NO"; return 0;}
    a=1;

    if(find(v.begin(), v.end(),a)!=v.end()) ans++;
    for(int i=1; i<v.size(); i++){
        if(find(v.begin(), v.end(),v[i]+v[i-1]+1)!=v.end()) ans++;
    }
    if(ans<k) cout<<"NO";
    else cout<<"YES";
    return 0;
}


