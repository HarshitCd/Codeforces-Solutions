#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s=0, j=1, m=-1;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        s+=v[i];
        m=(m<v[i])?v[i]:m;
    }
    while(j*n<=2*s) j++;
    j=(j<m)?m:j;
    cout<<j;
    return 0;

}
