#include<bits/stdc++.h>
#include<string>
using namespace std;

int Polycarp_Pocket(vector<int>& v){
    unordered_map<int, int> m;
    int minPockets=0;
    for(auto x: v){
        ++m[x];
        if(minPockets<m[x]) minPockets = m[x];
    }
    return minPockets;
}

int main(){
    int t;
    cin>>t;
    vector<int> v(t);
    for(int i=0; i<t; i++){
        cin>>v[i];
    }
    cout<<Polycarp_Pocket(v)<<endl;
    return 0;
}
