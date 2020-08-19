#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, c=0;
    cin>>n;
    string s;
    map<string, int> m1, m2;
    for(i=0; i<n; i++){cin>>s; m1[s]++;}
    for(i=0; i<n; i++){cin>>s; m2[s]++;}

    for(auto x: m1) c+=min(m2[x.first], x.second);
    cout<<n-c;
    return 0;
}
