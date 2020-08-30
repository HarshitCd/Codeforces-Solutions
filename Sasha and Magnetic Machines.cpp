#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m=1e9, s=0, c=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(m>v[i]) m=v[i];
        s+=v[i];
    }
    int b=s;
    for(int i=0; i<n; i++){
        for(int j=1; j<=v[i]; j++){
            if(v[i]%j==0){
                c=s;
                c=c-(v[i]+m)+m*j+v[i]/j;
                b=min(b, c);
            }
        }
    }
    cout<<b;
    return 0;
}
