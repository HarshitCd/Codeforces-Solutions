#include<bits/stdc++.h>
using namespace std;

int main(){
    const int inf=1e9+7;
    int n, k, mi=0, mx=0, s=0;
    cin>>n>>k;
    vector<pair<int , int>> v(n);
    vector<int> u;
    for(int i=0; i<n; i++){cin>>v[i].first; v[i].second=i;}
    sort(v.rbegin(), v.rend());
    for(int i=0; i<k; i++){
        u.push_back(v[i].second);
        s+=v[i].first;
    }


    if(k==1){
        cout<<v[0].first<<endl<<n;
    }

    else {
        sort(u.begin(), u.end());
        cout<<s<<endl;
        cout<<u[0]+1<<" ";
        for(int i=1; i<k-1; i++) cout<<u[i]-u[i-1]<<" ";
        cout<<n-u[k-2]-1;
    }
    return 0;
}
