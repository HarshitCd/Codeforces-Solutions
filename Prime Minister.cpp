#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    long long s=0, s1=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){cin>>v[i];s+=v[i];}
    a=v[0]/2;
    s1=v[0];
    vector<int> m;
    m.push_back(1);
    for(int i=1; s1<s/2+1 && i<n; i++){
        if(a>=v[i]){
            s1+=v[i];
            m.push_back(i+1);
        }
    }
    if(s1<s/2+1) cout<<0;
    else{
        cout<<m.size()<<endl;
        for(auto x: m)cout<<x<<" ";
    }
    return 0;
}
