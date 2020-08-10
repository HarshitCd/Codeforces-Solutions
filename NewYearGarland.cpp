#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0; j<t; j++){
        vector<long long> v(3);
        for(int i=0; i<3; i++) cin>>v[i];
        sort(v.begin(),v.end());
        if(v[0]+v[1] +1<v[2]) cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;

}
