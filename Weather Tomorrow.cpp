#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    a=v[1]-v[0];
    for(int i=2; i<n; i++){
        if(a!=v[i]-v[i-1]){
            a=0;
            break;
        }
    }
    cout<<v[n-1]+a;
    return 0;
}
