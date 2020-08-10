#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    vector<int> v(3);
    cin>>t;
    while(t--){
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(), v.end());
        if(v[2]<=v[0]+v[1]) cout<<(v[0]+v[1]+v[2])/2;
        else cout<<v[0]+v[1];
        cout<<endl;
    }
    return 0;
}
