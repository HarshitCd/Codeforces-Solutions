#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, i=0, j=1;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    while(j<n){
        if(v[i]==0){i++; continue;}
        if(i==j || v[i]==v[j]) j++;
        else if(v[i]+k>=v[j]){v[i]=0; i++;}
        else i++;
    }
    j=0;
    for(int x: v) if(x!=0) j++;
    cout<<j;
    return 0;
}
