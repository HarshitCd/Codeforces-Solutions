#include<bits/stdc++.h>
using namespace std;

int bsCheck(vector<int>& a, int n, int c){
    int l=0, h=n-1, mid;
    while(l<=h){
        mid=(l+h)/2;
        if(c>=a[mid] && c<a[mid+1]) return mid;
        else if(c<a[mid]) h=mid-1;
        else l=mid+1;
    }
    return 0;
}

int main(){
    const int inf = 1e9+7;
    int n, m, i, l, h, mid, c;
    cin>>n>>m;
    vector<int> a(n+2), b;
    a[0]=-inf;
    a[n+1]=inf;
    for(i=1; i<=n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    for(i=0; i<m; i++){
        cin>>c;
        b.push_back(bsCheck(a, n+2, c));
    }
    for(int x: b) cout<<x<<" ";
    return 0;
}
