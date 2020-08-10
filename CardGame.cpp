#include<bits/stdc++.h>
using namespace std;

void Card_Game(vector<int>& v, int n){
    for(auto x: v){
        if(x==n){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main(){
    int t, n, k1, k2;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n>>k1>>k2;
        vector<int> v1(k1);
        vector<int> v2(k2);
        for(int j=0; j<k1; j++) cin>>v1[j];
        for(int j=0; j<k2; j++) cin>>v2[j];
        Card_Game(v1, n);
    }
}
