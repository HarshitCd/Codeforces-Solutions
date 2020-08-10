#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, ans=0;
    int b, p, f, h, c;
    cin>>t;
    for(int i=0; i<t; i++){
        vector<pair<int, int>> v;
        cin>>b>>p>>f>>h>>c;
        v.push_back(make_pair(h, p));
        v.push_back(make_pair(c, f));
        sort(v.rbegin(), v.rend());

        if(2*v[0].second>b){
            cout<<v[0].first*((int)b/2)<<endl;
        }
        else{
            ans = v[0].first*v[0].second;
            b-=2*v[0].second;
            if(2*v[1].second>b){
                ans+=v[1].first*((int)b/2);
            }
            else{
                ans+=v[1].first*v[1].second;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
