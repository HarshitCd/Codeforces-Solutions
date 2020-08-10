#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s, a, b, x=0, y, c=0, i;
    vector<pair<int, int>> v;
    cin>>n>>s;
    int m = n-1;
    for(i=0; i<n; i++){
        cin>>a>>b;
        v.push_back(make_pair(a, b));
        y = 60*a+b;
        if(c==0 && y-x>=2*s+2){m = i-1; c++;}
        //cout<<y<<" "<<x<<endl;
        x=y;
    }
    if(v[0].first*60+v[0].second>=s+1) cout<<"0 0";
    //cout<<m<<endl;
    else cout<<v[m].first+(v[m].second+1+s)/60<<" "<<(v[m].second+1+s)%60<<endl;
    return 0;
}
