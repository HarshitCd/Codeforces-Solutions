#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, a, j=0, l=0;
    vector<int> v;
    map<int, int> m;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a;
        if(m[a]==0){
            v.push_back(a);
            j++; m[a]++;
            if(j-l>k){
                m[v[l]]=0;
                l++;
            }
        }
    }

    cout<<j-l<<endl;
    for(int i=j-1; i>=l; i--) cout<<v[i]<<" ";
    return 0;
}
