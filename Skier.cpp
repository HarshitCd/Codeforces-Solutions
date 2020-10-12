#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    map<char, int> m;
    m['N'] = 1; m['S'] = -1; m['E'] = 1; m['W'] = -1;
    for(int i=0; i<n; i++){
        int v=0, h=0, ans=0;
        cin>>s;
        int k = s.size();
        map<int, map<pair<int, int>, int>> mv, mh;
        for(char x: s){
            if(x=='N' || x=='S'){
                //cout<<x<<" "<<h<<" "<<v<<"/"<<mv[h][v]<<endl;
                if(mv[h][make_pair(min(v, v+m[x]), max(v, v+m[x]))]) ans+=1;
                else{
                    mv[h][make_pair(min(v, v+m[x]), max(v, v+m[x]))]=1;
                    ans+=5;
                }
                v+=m[x];
            }
            else{
                //cout<<x<<" "<<h<<" "<<v<<"/"<<mh[v][h]<<endl;
                if(mh[v][make_pair(min(h, h+m[x]), max(h, h+m[x]))]) ans+=1;
                else{
                    mh[v][make_pair(min(h, h+m[x]), max(h, h+m[x]))]=1;
                    ans+=5;
                }
                h+=m[x];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
