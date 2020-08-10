#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, b, d, s=0, ans=0;
    cin>>n>>b>>d;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]>b)continue;
        s+=v[i];
        if(s>d){
            ans++;
            s=0;
        }
    }
    cout<<ans;
    return 0;
}
