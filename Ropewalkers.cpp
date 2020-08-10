#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(3);
    int d, ans;
    for(int i=0; i<3; i++) cin>>v[i];
    cin>>d;
    sort(v.begin(), v.end());
    ans=max(d-(v[1]-v[0]), 0)+max(d-(v[2]-v[1]), 0);
    //ans+=abs(d+v[0]-v[1]);
    cout<<ans;
    return 0;
}
