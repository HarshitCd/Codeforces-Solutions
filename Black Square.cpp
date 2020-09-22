#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k=0, mx, my;
    cin>>n>>m;
    vector<string> v(n);
    set<int> x, y;
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(v[i][j]=='B'){
                x.insert(i);
                y.insert(j);
                k++;
            }
        }
    }

    if(x.begin()==x.end()) cout<<1;
    else{
        mx = *x.rbegin()-*x.begin()+1;
        my = *y.rbegin()-*y.begin()+1;
        if(mx>=my && mx<=m) cout<<mx*mx-k;
        else if(mx>=my && mx>m) cout<<-1;
        else if(mx<my && my<=n) cout<<my*my-k;
        else cout<<-1;
    }

    return 0;
}
