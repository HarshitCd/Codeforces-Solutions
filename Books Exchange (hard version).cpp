#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, j, d;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n), vis(n), ans(n);
        for(int i=0; i<n; i++){cin>>v[i]; v[i]--;}
        for(int i=0; i<n; i++){
            j=i;
            if(!vis[j]){
                vector<int> cur;
                while(!vis[j]){
                    vis[j]=1;
                    j=v[j];
                    cur.push_back(j);
                }
                for(int x: cur) ans[x] = cur.size();
            }
        }
        for(int x: ans) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
