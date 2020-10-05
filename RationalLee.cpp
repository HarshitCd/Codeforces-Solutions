#include<bits/stdc++.h>
using namespace std;

int main(){
    const int inf = 1e9+7;
    int t;
    long long n, k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<long long> v(n), u(k);
        long long s=0;
        int i, j=0, l=0;
        for(i=0; i<n; i++) cin>>v[i];
        for(i=0; i<k; i++) cin>>u[i];
        sort(v.begin(), v.end(), greater<long long>());
        sort(u.begin(), u.end());

        i=0;
        while(i<k){
            s += v[l];
            if(u[i]==1) s += v[l];
            u[i]--;
            if(u[i]==0) j=i+1;
            i++; l++;
        }
        n-=k;
        i=j;
        while(i<k){
            while(u[i]--) l++;
            s += v[l-1];
            i++;
        }
        cout<<s<<endl;
    }
    return 0;
}
