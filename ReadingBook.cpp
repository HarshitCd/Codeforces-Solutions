#include<bits/stdc++.h>
using namespace std;

int Reading_Book(vector<pair<int, int>>& v, int n, int k){
    for(int i=0; i<n; i++){
        if(v[i].second>=k) return n-i;
    }
    return 0;
}

int main(){
    int n, a, b, k;
    vector<pair<int, int> > v;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        v.push_back(make_pair(a, b));
    }
    cin>>k;
    cout<<Reading_Book(v, n, k);
    return 0;
}
