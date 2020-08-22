#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k, s=0, mo = 998244353, p=1;
    cin>>n>>k;
    vector<pair<int, int>> v(n);
    vector<int> u;
    for(int i=0; i<n; i++){cin>>v[i].first; v[i].second=i;}
    sort(v.rbegin(), v.rend());
    for(int i=0; i<k; i++){s+=v[i].first; u.push_back(v[i].second);}
    sort(u.begin(), u.end());
    cout<<s<<" ";

        for(int i=1; i<k; i++)
        p = (p*(u[i]-u[i-1]))%mo;
    cout<<(p)%mo;
    return 0;
}
