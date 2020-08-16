#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, s, m=INT_MAX, t=0, r=0;
    cin>>n>>s;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(m>v[i]) m=v[i];
        t+=v[i];
    }
    if(s>t) cout<<-1;
    else{
        for(int i=0; i<n; i++){
            r+=v[i]-m;
            v[i]=m;
        }
        //cout<<r;

        if(s<=r) cout<<m;
        else{
            s-=r;
            while(s-n>=0){
                m--;
                s-=n;
            }
            if(s!=0) m--;
            cout<<m;
        }
    }
    return 0;
}
