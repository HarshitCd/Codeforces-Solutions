#include<bits/stdc++.h>
using namespace std;

int main(){
    int v, n, a, b, t[3]={0, 0, 0};
    map<int, int> m;

    cin>>v>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        m[a]++;
        m[b]++;
    }
    for(auto x: m){
        if(x.second==1) t[1]++;
        else if(x.second==2) t[2]++;
        else t[0]++;
    }
    if(t[1]==2 && t[0]==0) cout<<"bus topology";
    else if(t[1]==0 && t[0]==0) cout<<"ring topology";
    else if(t[1]==v-1 && t[2]==0 && t[0]==1) cout<<"star topology";
    else cout<<"unknown topology";
    return 0;
}
