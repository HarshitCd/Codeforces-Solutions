#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        set<int> r, c;

        vector<vector<int>> v(n, vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>v[i][j];
                if(v[i][j]==1){
                    r.insert(i);
                    c.insert(j);
                }
            }
        }

        n-=r.size();
        m-=c.size();

        if(min(n, m)%2==0) cout<<"Vivek";
        else cout<<"Ashish";

        cout<<endl;
    }
    return 0;
}
