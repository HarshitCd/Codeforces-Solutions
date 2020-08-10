#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m=0, h, a;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    for(int i=0; i<n; i++){
        h=1;
        a=v[i];
        while(a!=-1){
            a=v[a-1];
            h++;
        }
        m=max(h, m);
    }
    cout<<m;
    return 0;
}
