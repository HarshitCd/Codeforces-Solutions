#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, s, k;
    cin>>t;
    while(t--){
        int i, c=0;
        cin>>n>>s>>k;
        vector<int> a(k);
        for(i=0; i<k; i++) cin>>a[i];
        for (i=0; i<=k; i++) {
            if (s-i >= 1 && find(a.begin(), a.end(), s-i) == a.end()) {cout << i << endl; break;}
            else if (s+i <= n && find(a.begin(), a.end(), s+i) == a.end()) {cout << i << endl; break;}
        }
    }
    return 0;
}
