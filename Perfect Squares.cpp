#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.rbegin(), v.rend());
    for(int i=0; i<n; i++){
        int a = sqrt(v[i]);
        if(a*a!=v[i]){cout<<v[i]; break;}
    }
    return 0;
}
