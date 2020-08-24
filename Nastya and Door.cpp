#include<bits/stdc++.h>
using namespace std;

bool peak(int i, vector<int>& v, int l, int r) {
    if (i==l || i==r) return 0;
    return v[i-1]<v[i] && v[i]>v[i+1];
}

int main(){
    int t, n, k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        int ans=-1, l=0, r=k-1, now=0;
        for(int i=1; i+1<k; i++){
            if(peak(i, v, 0, k - 1)) now++;
        }
        ans = now+1;
        for (int i=k; i<n; i++) {
            if (peak(i-k+1, v, i-k, i-1)) --now;
            if (peak(i-1, v, i-k+1, i)) ++now;
            if (now+1>ans) {
                ans = now+1;
                l = i-k+1;
                r = i;
            }
        }
        cout<<ans<<" "<<l+1<<"\n";
    }
}
