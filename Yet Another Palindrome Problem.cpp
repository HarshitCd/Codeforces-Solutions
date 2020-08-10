#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        map<int, int> m;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
            m[v[i]]++;
        }
        int a=-1, b=-1;
        for(int i=0; i<n && (a==-1 || b==-1); i++){
            //cout<<a<<" "<<b<<endl;
            if(a==-1 && m[v[i]]>1){
                a=v[i];
                m[v[i]]--;
            }
            else if(m[v[i]]==1 && a!=-1){
                if(a==v[i]) a=-1;
                else b=v[i];
            }
            else if(a!=-1 && m[v[i]]>0) b=v[i];
        }
        //cout<<a<<" "<<b<<endl;
        if(a==-1 || b==-1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
