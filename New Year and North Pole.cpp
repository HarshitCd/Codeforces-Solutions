#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, a, b, p=0;
    string s;
    cin>>n;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++){
        cin>>a>>s;
        if(s=="East" || s=="West") b=0;
        else if(s=="North") b=-1;
        else b=1;

        v[i].first = a;
        v[i].second = b;
    }

    for(int i=0; i<n; i++){

        if(p==0 && v[i].second!=1){cout<<"NO"; return 0;}
        else if(p==20000 && v[i].second!=-1){cout<<"NO"; return 0;}

        p += v[i].first*v[i].second;
        if(p<0 || p>20000) break;
    }
    if(p!=0) cout<<"NO";
    else cout<<"YES";

    return 0;
}
