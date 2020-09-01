#include<bits/stdc++.h>
using namespace std;

int main(){
    const int inf = 1e9+7;
    int n, k, mx=-inf;
    cin>>n>>k;
    vector<int> v(n), s(n+2), p(n+2);
    for(int i=0; i<n; i++) cin>>v[i];
    s[1] = v[0];
    p[n] = v[n-1];
    if(k==1){
        cout<<*min_element(v.begin(), v.end());
    }
    else if(k==2){
        for(int i=1; i<n; i++){
            s[i+1]=min(v[i], s[i]);
        }
        for(int i=n-2; i>=0; i--){
            p[i+1]=min(v[i], p[i+2]);
        }

        for(int i=1; i<n; i++){
            mx = max(mx, max(s[1], p[i+1]));
        }

        cout<<mx;
    }
    else{
        cout<<*max_element(v.begin(), v.end());
    }
    return 0;
}
