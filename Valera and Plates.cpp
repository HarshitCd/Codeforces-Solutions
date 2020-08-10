#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int a=m, b=k, ans=0;;
    for(int i=0; i<n; i++){
        if(v[i]==1){
            if(a--<=0) ans++;
        }
        else{
            if(b>0) b--;
            else if(a>0) a--;
            else ans++;
        }
    }
    cout<<ans;
    return 0;
}
