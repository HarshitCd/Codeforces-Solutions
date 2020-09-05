#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s=0, j=0, i, a;
    const int inf = 1e9+7;
    cin>>n;
    vector<pair<int, int>> v(n);
    cin>>a;
    v[0].first = inf; v[0].second=1;
    for(i=1; i<n; i++){
        cin>>v[i].first;
        v[i].second = i+1;
        s+=v[i].first;
    }
    s+=a;
    i=1;
    if(s<n-1 || a==0) cout<<-1;
    else{
        cout<<n-1<<endl;
        sort(v.rbegin(), v.rend());
        v[0].first = a;
        while(i<n){
            while(i<n && v[j].first--){
                cout<<v[j].second<<" "<<v[i].second<<endl;
                i++;
            }
            if(i!=n) j++;
        }
    }
    return 0;
}
