#include<bits/stdc++.h>
using namespace std;

int main(){
    long long l, r, i, j, x=-1, y=-1;
    vector<long long> v;
    cin>>l>>r;

    for(i=1; i<2*1e9; i*=2){
        for(j=1; i*j<=2*1e9; j*=3)
            v.push_back(i*j);
    }

    v.push_back(2*1e9+1);
    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        if(x==-1 && v[i]>=l) x=i;
        if(y==-1 && v[i]>r) y=i;

        if(x!=-1 && y!=-1) break;
    }

    cout<<y-x;
    return 0;
}
