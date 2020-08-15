#include<bits/stdc++.h>
using namespace std;

int main(){
    int d, s, a, b, mi=0, ma=0, i;
    cin>>d>>s;
    vector<pair<int, int>> v;
    for(i=0; i<d; i++){
        cin>>a>>b;
        v.push_back(make_pair(a, b));
        mi+=a;
        ma+=b;
    }
    i=0;
    if(s<mi || s>ma) cout<<"NO";
    else{
        s-=mi;
        while(s){
            d=v[i].second-v[i].first;
            if(d){
                //cout<<d<<" ";
                if(s<d){v[i].first+=s; break;}
                else {v[i].first = v[i].second; s-=d;}
            }
            i++;
        }
        cout<<"YES\n";
        for(auto x: v) cout<<x.first<<" ";
    }
    return 0;
}
