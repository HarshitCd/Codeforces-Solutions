#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, t, n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        int c=0;
        for(int i=0; i<n; i++) cin>>v[i];
        for(int i=0; i<n; i++){
            if(v[i]==1) c++;
            else break;
        }
        if(c==0) cout<<"First";
        else if(c==n && c%2==1) cout<<"First";
        else if(c==n && c%2==0) cout<<"Second";
        else if(c%2==0) cout<<"First";
        else cout<<"Second";
        cout<<endl;
    }
    return 0;
}
