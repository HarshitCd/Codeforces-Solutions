#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum=0, c_sum=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.rbegin(), v.rend());
    for(int x: v) sum+=x;
    for(int i=0; i<n; i++){
        c_sum+=v[i];
        sum-=v[i];
        if(c_sum>sum){
            cout<<i+1;
            break;
        }
    }
    return 0;
}
