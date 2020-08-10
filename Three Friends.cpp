#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(3);
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(), v.end());
        if(v[2]-v[0]<3) cout<<0<<endl;
        else cout<<2*(v[2]-v[0]-2)<<endl;
    }
    return 0;
}
