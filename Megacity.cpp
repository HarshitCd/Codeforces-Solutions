#include<bits/stdc++.h>
using namespace std;

bool mySort(pair<double, long long> a, pair<double, long long> b){
    if(a.first==b.first) return a.second>b.second;
    return a.first<b.first;
}

int main(){
    long long n, p, x, i;
    double a, b;

    cin>>n>>p;

    vector<pair<double, long long>> v(n);
    for(i=0; i<n; i++){
        cin>>a>>b>>x;
        v[i].first = sqrt(a*a+b*b);
        v[i].second = x;
    }

    sort(v.begin(), v.end(), mySort);
    i=0;
    while(i<n && p<1e6){
        p+=v[i].second;
        i++;
    }
    if(p>=1e6) printf("%.7lf", v[i-1].first);
    else cout<<-1;
    return 0;
}
