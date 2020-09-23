#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, i, a, b;
    cin>>n>>m;
    vector<pair<int, int>> v(m);
    vector<int> u(n);
    map<int, int> ma;
    for(i=0; i<m; i++){
        cin>>a>>b;
        ma[a]=b; ma[b]=a;
        u[a-1]++; u[b-1]++;
    }


    for(i=0; i<n; i++){
        if(u[i]==0) break;
    }

    if(i==n){
        a=1;
        b=ma[a];
        cout<<2*(n-2)<<endl;
        for(int i=1; i<=n; i++){
            if(a==i || b==i) continue;
            cout<<a<<" "<<i<<endl;
        }
        for(int i=1; i<=n; i++){
            if(a==i || b==i) continue;
            cout<<b<<" "<<i<<endl;
        }
    }
    else{
        a=i+1;
        cout<<n-1<<endl;
        for(int i=1; i<=n; i++){
            if(a==i) continue;
            cout<<a<<" "<<i<<endl;
        }
    }
    return 0;
}
