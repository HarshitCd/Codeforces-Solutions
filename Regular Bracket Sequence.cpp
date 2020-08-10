#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v(4);

    int n, a, j=-1, c;
    for(int i=0; i<4; i++) cin>>v[i];

    if(v[0]==v[3] && (v[2]==0 || v[0]>0)) cout<<1;
    else cout<<0;

    return 0;
}
