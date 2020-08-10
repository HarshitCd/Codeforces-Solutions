#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m=INT_MAX, x=-1, d=INT_MAX;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++) cin>>v[i];

    for(int i=0; i<n; i++){
        if(m==v[i]){d = min(d, i-x); x=i;}
        else if(m>v[i]){
            d=INT_MAX;
            m=v[i];
            x=i;
        }
    }
    cout<<d;
    return 0;
}
