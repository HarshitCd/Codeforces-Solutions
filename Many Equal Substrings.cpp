#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, j, i;
    cin>>n;
    vector<int> v(n);

    for(i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    i=0; j=1;
    while(j<n){
        if(v[i]!=v[j]) i++;
        j++;
    }
    cout<<i;
    return 0;
}
