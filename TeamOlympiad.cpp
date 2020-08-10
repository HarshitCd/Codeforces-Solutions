#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, mi=1e9+5;
    cin>>n;
    map<int, vector<int>> m;
    for(int i=0; i<n; i++){
        cin>>a;
        m[a].push_back(i+1);
    }
    for(int j=1; j<4; j++){
        int a=m[j].size();
        mi=min(mi, a);
    }
    cout<<mi<<endl;
    for(int i=0; i<mi; i++){
        for(int j=1; j<4; j++){
            cout<<m[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
