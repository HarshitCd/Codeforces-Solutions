#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    cin>>n;
    map<int, int> m;
    for(int i=0; i<n; i++){
        cin>>a;
        m[a]++;
    }
    if(n==1) cout<<"YES";
    else{
        int c = (n%2==0)?n/2: n/2+1;
        for(auto x: m){
            if(x.second>c){cout<<"NO"; return 0;}
        }
        cout<<"YES";
    }
    return 0;
}
