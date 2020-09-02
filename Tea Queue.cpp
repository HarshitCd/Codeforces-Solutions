#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        int time=0;
        cin>>n;
        vector<vector<int>> v(n, vector<int>(3));
        vector<int> ans;
        for(int i=0; i<n; i++){
            cin>>v[i][0]>>v[i][2];
            v[i][1]=i;
        }
        sort(v.begin(), v.end());
        for(vector<int> x: v){
            if(max(time, x[0])<=x[2]){
                time=max(time, x[0])+1;
                ans.push_back(time-1);
            }
            else ans.push_back(0);
        }
        for(int x: ans) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
