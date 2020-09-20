#include<bits/stdc++.h>
using namespace std;

int main(){
    int limit = 1e6, c=0;
    vector<int> v(limit, 1), u;

    for(int i=2; i<limit; i++){
        if(v[i]){
            c++;
            for(long long j=2*i; j*j<=limit; j+=i) v[j]=0;
        }
    }
    for(int i=2; i<=limit; i++) if(v[i]) u.push_back(i);

    long long n;
    cin>>n;

    for(int i=0; i<u.size() && u[i]*u[i]<=n; i++){
        if(n%u[i]==0){
            while(n%u[i]==0) n/=u[i];
            n*=u[i];
        }
    }

    cout<<n;
    return 0;
}
