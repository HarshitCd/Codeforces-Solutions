#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n), ans;
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.begin(), v.end());
        for(int i=0; i<n/2; i++) {
            ans.push_back(v[i]);
            ans.push_back(v[n - i - 1]);
        }
        if(n%2==1) ans.push_back(v[n / 2]);
        reverse(ans.begin(), ans.end());
        for(int x: ans) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
