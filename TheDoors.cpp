#include<bits/stdc++.h>
using namespace std;

int Doors(vector<int>& v){
    int i=0;
    unordered_map<int, int> m;
    for(auto x: v)
        ++m[x];
    for(auto x: v){
        if(m[1]==0 || m[0]==0)
            return i;
        --m[x];
        ++i;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    cout<<Doors(v);
    return 0;
}
