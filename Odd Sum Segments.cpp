#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k, i;
    cin>>t;
    while(t--){
        long long s=0, c=0, s1=0;
        cin>>n>>k;
        vector<int> v(n), u;
        for(i=0; i<n; i++){
            cin>>v[i];
            s+=v[i];
        }
        for(i=0; i<n; i++){
            if(c==k-1) break;
            s1+=v[i];
            if(s1%2==1){
                u.push_back(i+1);
                s-=s1;
                s1=0;
                c++;
            }
        }
        //cout<<c<<" "<<s<<endl;
        if(c!=k-1) cout<<"NO";
        else if(c==k-1 && s%2==0) cout<<"NO";
        else{
            cout<<"YES\n";
            for(int x: u) cout<<x<<" ";
            cout<<n;
        }
        cout<<endl;
    }
    return 0;
}
