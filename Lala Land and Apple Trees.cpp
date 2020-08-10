#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, c=0, s=0, i;
    vector<pair<int, int>> v, u;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>a>>b;
        if(a<0){c++; v.push_back(make_pair(-a, b));}
        else u.push_back(make_pair(a, b));
        s+=b;
    }
    sort(u.begin(), u.end());
    sort(v.begin(), v.end());
    i=1;
    if(2*c==n) s;
    else if(abs(n-2*c)==1) s;
    else if(n-c>c) while(n-2*c-i!=0){s-=u[n-c-i].second; i++;}
    else while(2*c-n-i!=0) {s-=v[c-i].second; i++;}
    cout<<s;
    return 0;
}
