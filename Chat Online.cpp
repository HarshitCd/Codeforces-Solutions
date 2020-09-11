#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int p, q, l, r, high, low, mid, ans=0;
    cin>>p>>q>>l>>r;

    vector<pair<int, int>> v(p), u(q);

    for(int i=0; i<p; i++){
        cin>>v[i].first>>v[i].second;
    }
    for(int i=0; i<q; i++){
        cin>>u[i].first>>u[i].second;
    }

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    for(int i=l; i<=r; i++){
        for(int j=0; j<q; j++){
            high = p-1; low=0;
            while(high>=low){
                mid = (high+low)/2;
                if(u[j].second+i>=v[mid].first && u[j].first+i<=v[mid].second){
                    ans++;
                    break;
                }
                else if(u[j].second+i<v[mid].first) high = mid-1;
                else low = mid+1;
            }
            if(high>=low) break;

        }
    }
    cout<<ans;
    return 0;
}
