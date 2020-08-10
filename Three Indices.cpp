#include<bits/stdc++.h>
#define inf 1e9+7
using namespace std;
int main(){
    int t, n;
    cin>>t;
    while(t--){
        int c=0, p=inf, j=0;
        cin>>n;
        vector<int> v(3);
        v[0]=inf;
        for(int i=0; i<n; i++){
            cin>>c;
            if(p>c && j==0){
            }
            else if(p<c && j==0){
                j++;
            }
            else if(p<c && j==1){
            }
            else{
                j++;
            }
            p=c;
            if(j!=3) v[j]=i+1;
        }
        if(j<2) cout<<"NO\n";
        else{
            cout<<"YES\n";
            for(int x: v) cout<<x<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
