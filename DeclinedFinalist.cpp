#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, ans=0;
    cin>>n;
    vector<int> v(n+1);
    v[0]=0;
    for(int i=1; i<n+1; i++){
        cin>>a;
        ans=max(a, ans);
    }
    ans = (ans<25)?0:ans-25;
    cout<<ans;
    return 0;
}
