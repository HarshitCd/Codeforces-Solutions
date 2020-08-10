#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, s=0, c, a=0;
    cin>>n>>k;
    vector<int> v(n), u;
    for(int i=0; i<n; i++){cin>>v[i]; s+=v[i];}
    if(s%k!=0) cout<<"No";
    else{
        s/=k;
        c=0;
        for(int i=0; i<n; i++){
            c+=v[i];
            a++;
            if(c==s){u.push_back(a); a=0; c=0;}
        }
        if(u.size()==0) cout<<"No";
        else{
            cout<<"Yes\n";
            for(int x: u) cout<<x<<" ";
        }
    }
    return 0;
}
