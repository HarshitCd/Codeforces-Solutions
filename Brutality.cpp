#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, i, j, su=0;
    string s;
    cin>>n>>k;
    vector<int> v(n);
    for(i=0; i<n; i++) cin>>v[i];
    cin>>s;
    i=0; j=0;
    while(i<n){
        while(j<n && s[i]==s[j]) j++;
        sort(v.begin()+i, v.begin()+j);
        reverse(v.begin()+i, v.begin()+j);
        for(long long a=i; a<min(j, i+k); a++) {su+=v[a];}
        i=j;
    }
    cout<<su;
    return 0;
}
