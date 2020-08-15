#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, i, j, m, ans=1;
    cin>>n;
    vector<long long> v(n);
    for(i=0; i<n; i++) cin>>v[i];
    i=0; j=1;
    while(j<n){
        if(2*v[j-1]>=v[j]) j++;
        else{
            //cout<<i<<" "<<j<<endl;
            ans=max(ans, j-i);
            i=j;
            j++;
        }
    }

    ans = max(ans, j-i);
    cout<<ans;
    return 0;
}
