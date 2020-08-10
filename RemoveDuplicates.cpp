#include<bits/stdc++.h>
using namespace std;

void Remove_Duplicates(vector<int>& v, int n){
    map<int , int> m;
    vector<int> a;
    int s=0;
    for(int i=n-1; i>=0; i--){
        if(!m[v[i]]){
            a.push_back(v[i]);
            m[v[i]]++;
        }
    }
    s = m.size();
    cout<<s<<endl;
    for(int i=s-1; i>=0; i--) cout<<a[i]<<" ";
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    Remove_Duplicates(v, n);
    return 0;
}
