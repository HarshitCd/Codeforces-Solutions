#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t, c, i, j=0, ans=0;
    cin>>n>>t>>c;
    vector<int> v(n);
    for(i=0; i<n; i++){
        cin>>v[i];
        if(v[i]<=t) j++;
        else{
            ans+=(j<c)?0:j-c+1;
            j=0;
        }
    }
    ans+=(j<c)?0:j-c+1;
    j=0;
    cout<<ans;
    return 0;
}
