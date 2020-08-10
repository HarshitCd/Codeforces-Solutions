#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, a, b, c, r, i;
    long long ans;
    cin>>t;
    while(t--){
        ans=0;
        cin>>a>>b>>c>>r;
        int m=c-r;
        int mm=c+r;
        int left=max(m, min(a, b));
        int right= min(mm, max(a, b));
        cout<<max(a, b)-min(a, b)-max(0,(right-left))<<endl;
    }
    return 0;
}
