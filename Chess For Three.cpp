#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s=3, a;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        if(v[i]==s){
            cout<<"NO";
            return 0;
        }
        s=6-v[i]-s;
    }
    cout<<"YES";
    return 0;
}
