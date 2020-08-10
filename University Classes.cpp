#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a=0, c=0;
    cin>>n;
    vector<string> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<7; i++){
        c=0;
        for(int j=0; j<n; j++){
            if(v[j][i]=='1') c++;
        }
        a=max(a, c);
    }
    cout<<a;
    return 0;
}
