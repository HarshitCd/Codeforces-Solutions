#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, c=0, d=0, a, ans=0;
    map<int, int> m;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>a;
        if(ans<=2 && m[a]==0){
            ans++;
            if(!c) c=a;
            else d=a;
        }
        m[a]++;
    }

    if(ans!=2 || m[d]!=m[c]) cout<<"NO";
    else{
        cout<<"YES\n";
        cout<<c<<" "<<d;
    }

    return 0;
}
