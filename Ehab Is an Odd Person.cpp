#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, o=0, e=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        (v[i]%2==0)?e++: o++;
    }
    if(e!=0 && o!=0) sort(v.begin(), v.end());
    for(int x: v) cout<<x<<" ";
    return 0;
}

