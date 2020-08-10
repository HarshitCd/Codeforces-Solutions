#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m=0;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[m]<v[i]) m=i;
    }
    for(int i=1; i<m; i++){
        if(v[i-1]>v[i]) {cout<<"NO"; return 0;}
    }
    for(int i=m+1; i<n; i++){
        if(v[i-1]<v[i]) {cout<<"NO"; return 0;}
    }
    cout<<"YES";
    return 0;
}
