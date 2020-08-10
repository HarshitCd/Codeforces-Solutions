#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a=0;
    cin>>n;
    vector<int> v(n), u(n);
    for(int i=0; i<n; i++){cin>>v[i]; u[i]=i;}
    sort(v.begin(), v.end());
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(u[i]==-1) break;
            if(u[j]==-1) continue;
            if(v[j]%v[i]==0) u[j]=-1;
        }
    }
    //for(int x: v){cout<<x<<" ";}
    //cout<<endl;
    for(int x: u){if(x!=-1) a++;}
    cout<<a;
    return 0;
}
