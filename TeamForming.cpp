#include<bits/stdc++.h>
using namespace std;

int Mini_Questions(vector<int>& v){
    sort(v.rbegin(), v.rend());
    int ans=0;
    for(int i=0; i<v.size()-1; i+=2){
        ans+=v[i]-v[i+1];
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    cout<<Mini_Questions(v);
    return 0;
}
