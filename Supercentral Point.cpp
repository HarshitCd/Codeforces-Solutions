#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y, a=0, b=0, c=0, d=0, ans=0;
    cin>>n;
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        v.push_back(make_pair(x, y));
    }

    for(int i=0; i<n; i++){
        a=0; b=0; c=0; d=0;
        for(int j=0; j<n; j++){
            if(i==j) continue;
            //if(a==1 && b==1 && c==1 && d==1){cout<<v[i].first<<"-"<<v[i].second<<endl; break;}
            if(a==0 && v[i].first==v[j].first && v[i].second<v[j].second) a++;
            else if(b==0 && v[i].first==v[j].first && v[i].second>v[j].second) b++;
            else if(c==0 && v[i].first<v[j].first && v[i].second==v[j].second) c++;
            else if(d==0 && v[i].first>v[j].first && v[i].second==v[j].second) d++;
        }
        if(a==1 && b==1 && c==1 && d==1) ans++;
    }
    cout<<ans;
    return 0;
}
