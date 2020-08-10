#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, x;
    cin>>t;
    for(int j=0; j<t; j++){
        int n, ans=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.begin(), v.end());
        x=0;
        for(int i=0;i<n-1;i++){
            if(v[i+1]-v[i]==1){
                cout<<2<<endl;
                x=-1;
                break;
            }
        }
        if(x==0){cout<<1<<endl;}
    }
    return 0;
}
