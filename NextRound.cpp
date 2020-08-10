#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.rbegin(), v.rend());
    if(v[k-1]==0){
        k--;
        while(k>=0 && v[k-1]==v[k]) k--;
    }
    else{
        while(k<n && v[k-1]==v[k]) k++;
    }
    cout<<k<<endl;
    return 0;
}
