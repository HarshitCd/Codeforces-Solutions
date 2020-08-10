#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, s=0, c=0, a;
    cin>>t;
    for(int j=0; j<t; j++){
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>a;
            s+=a;
            if(a==0) c++;
        }
        if(s==0 && c==0) cout<<1<<endl;
        else if(c!=0 && c+s==0)cout<<c+1<<endl;
        else if(c!=0) cout<<c<<endl;
        else cout<<0<<endl;
        c=0;
        s=0;
    }
    return 0;
}
