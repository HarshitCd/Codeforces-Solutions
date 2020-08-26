#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, n, s, i;
    cin>>t;
    while(t--){
        cin>>n>>s;
        long long sum=0;
        int m=0, k, c=0;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        for(i=0; i<n; i++){
            sum+=v[i];
            c++;
            if(v[m]<v[i]) m=i;
            if(sum>s) break;
        }
        //cout<<i<<" ";
        k=--c;
        if(i==n) cout<<0;
        else if(s<sum){
            sum-=v[m];
            for(i=c; i<n && sum<=s; i++){
                sum+=v[i];
                k++;
            }
            if(k<c) cout<<0;
            else cout<<m+1;
        }
        cout<<endl;
    }
    return 0;
}
