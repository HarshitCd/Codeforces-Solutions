#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> m;
    int p, n, a, f=0;

    cin>>p>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(m[a%p]!=0 && f==0){
            f=i+1;
        }
        m[a%p]++;
    }
    if(f) cout<<f;
    else cout<<-1;
    return 0;
}
