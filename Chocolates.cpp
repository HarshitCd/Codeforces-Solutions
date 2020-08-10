#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, ans, a;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    ans=v[n-1], a=v[n-1]-1;
    for(int i=n-2; i>=0 && a!=0; i--){
        if(v[i]<=a){
            ans+=v[i];
            a=v[i]-1;
        }
        else{
            ans+=a;
            a--;
        }
    }
    cout<<ans;
    return 0;
}


