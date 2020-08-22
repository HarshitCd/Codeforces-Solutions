#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n=1000000, m, a, l, h, mid;

    vector<bool> v(n+1, true);
    vector<long long> p;
    for(long long i=2; i<=n; i++){
        if(v[i]){
            p.push_back(i);
            for(long long j=i*i; j<=n; j+=i) v[j]=false;
        }
    }

    cin>>m;

    for(int i=0; i<m; i++){
        l=0; h=p.size()-1;
        cin>>a;
        while(l<=h){
            mid=(l+h)/2;
            if(p[mid]*p[mid]==a) break;
            else if(p[mid]*p[mid]>a) h=mid-1;
            else l=mid+1;
        }
        if(l>h) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
