#include<bits/stdc++.h>
using namespace std;

int main(){
    const int inf = 1e9+7;
    int n, a, b, mi, mx=-inf;
    cin>>n>>a>>b;

    for(int i=1; i<n; i++){
        mi = min(a/i, b/(n-i));
        mx = max(mx, mi);
    }
    cout<<mx;
    return 0;
}
