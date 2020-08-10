#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, x, sum=0;
    cin>>n>>k>>x;
    vector<int> v(n);
    for(int i=n-1; i>=0; i--) cin>>v[i];
    for(int i=0; i<n; i++){
        if(i<k) sum+=x;
        else sum+=v[i];
    }
    cout<<sum;
    return 0;
}
