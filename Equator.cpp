#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, ans, high, low, mid;
    cin>>n;
    vector<long long> v(n+1);
    for(int i=1; i<=n; i++){
        cin>>v[i];
        v[i]+=v[i-1];
    }
    ans = (v[n]&1)? (v[n]>>1)+1: (v[n]>>1);
    high = n;
    low = 0;
    while(low<=high){
        mid = (low+high)/2;
        if(v[mid]<ans && ans<=v[mid+1]) break;
        else if(ans>=v[mid+1]) low = mid+1;
        else high = mid-1;
    }
    cout<<mid+1;
    return 0;
}
