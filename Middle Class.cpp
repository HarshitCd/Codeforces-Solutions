#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int i=0, j=n, ans=0;
        long long s=0;

        vector<int> v(n);
        for(int i=0; i<n; i++){cin>>v[i]; s+=v[i];}
        sort(v.begin(), v.end());
        if(v[n-1]<x) cout<<0;
        else{
            while(i<n && s/(j-i)<x){
                s-=v[i];
                i++;
            }
            cout<<j-i;
        }
        cout<<endl;
    }
    return 0;
}
