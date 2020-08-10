#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, h, m, mp=0;
    cin>>n>>h>>m;
    vector<int> v(n, h);
    int l, r, x;
    for(int i=0; i<m; i++){
        cin>>l>>r>>x;
        for(int j=l-1; j<r; j++)
            v[j] = min(v[j], x);
    }
    for(int x: v) mp+=x*x;
    cout<<mp;
    return 0;
}
