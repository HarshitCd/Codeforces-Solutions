#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> m;
    string s;
    char c;
    int n, k;
    long long ans=0, co=1;
    cin>>n>>k>>s;
    for(int i=0; i<k; i++){cin>>c; m[c]++;}

    for(int i=0; i<n; i++){
        if(m[s[i]]){
            ans+=co;
            co++;
        }
        else co=1;
    }
    cout<<ans;
    return 0;
}
