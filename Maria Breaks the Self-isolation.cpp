#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, ans, i;
    cin>>t;
    while(t--){
        ans=1;
        cin>>n;
        vector<int> v(n);
        map<int, int> m;
        for(int i=0; i<n; i++){cin>>v[i]; m[v[i]]++;}
        sort(v.begin(), v.end());
        for(i=n-1; i>=0; i--){
            if(v[i]<=i+1){
                cout<<i+2<<endl;
                break;
            }
        }
        if(i==-1) cout<<1<<endl;;
    }
    return 0;
}
