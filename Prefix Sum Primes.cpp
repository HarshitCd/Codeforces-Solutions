#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    cin>>n;
    map<int, int> m;
    for(int i=0; i<n; i++){
        cin>>a;
        m[a]++;
    }
    if(m[2]==0){
        while(m[1]--) cout<<1<<" ";
    }
    else if(m[1]==0){
        while(m[2]--) cout<<2<<" ";
    }
    else {
        cout<<2<<" "<<1<<" ";
        m[2]--; m[1]--;
        while(m[2]--) cout<<2<<" ";
        while(m[1]--) cout<<1<<" ";
    }
    return 0;
}
