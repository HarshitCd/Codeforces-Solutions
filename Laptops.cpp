#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    vector<pair<int, int>> v;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n-1; i++){
        if(v[i].second>v[i+1].second){
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
    return 0;
}
