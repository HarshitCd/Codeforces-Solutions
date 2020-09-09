#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, i=0;
    long long ans=0;
    vector<long long> v(26);
    string s;
    cin>>n>>k>>s;
    for(char x: s) v[x-'A']++;

    sort(v.rbegin(), v.rend());

    while(k-v[i]>0){
        ans+=v[i]*v[i];
        k-=v[i];
        i++;
    }
    cout<<ans+k*k;
    return 0;
}
