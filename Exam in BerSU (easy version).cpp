#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, s=0, sum=0, c=0;
    cin>>n>>m;
    vector<int> v(n);
    set<int> o, ss;
    map<int, int> ma, maa;
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++){
        sum+=v[i];
        o=ss;
        ma=maa;
        c=0;
        s=sum;
        while(s>m){
            if(ma[*o.rbegin()]){
                s-=*o.rbegin();
                c++;
                ma[*o.rbegin()]--;
            }
            else o.erase(*o.rbegin());
        }
        ss.insert(v[i]);
        maa[v[i]]++;
        cout<<c<<" ";
    }
    return 0;
}
