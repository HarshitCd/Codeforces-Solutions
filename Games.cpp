#include<bits/stdc++.h>
using namespace std;

int Game_Count(vector<pair<int, int>>& v, int n){
    int c=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) continue;
            if(v[i].first == v[j].second) c++;
        }
    }
    return c;
}

int main(){
    vector<pair<int, int>> v;
    int a,b,n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        v.push_back(make_pair(a, b));
    }
    cout<<Game_Count(v, n);
    return 0;
}
