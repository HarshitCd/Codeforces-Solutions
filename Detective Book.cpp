#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, ans=0;
    cin>>n;
    vector<int> v(n);
    for(i=0; i<n; i++){cin>>v[i]; v[i]--;}
    i=0;
    while(i<n){
        int ma=i;
        while(i<n && i<=ma){
            ma = max(ma, v[i]);
            i++;
        }
        //cout<<ma+1<<" ";
        ans++;
    }
    cout<<ans;
    return 0;
}
