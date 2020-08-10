#include<bits/stdc++.H>
using namespace std;

int main(){
    int n, t;
    cin>>t;
    for(int j=0; j<t; j++){
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(int x: a)cout<<x<<" ";
        cout<<endl;
        for(int x: b)cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
