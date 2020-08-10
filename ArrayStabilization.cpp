#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    if(n==1 || n==2) cout<<0;
    else{
        sort(v.rbegin(), v.rend());
        cout<<min(v[1]-v[n-1], v[0]-v[n-2]);
    }
    return 0;
}
