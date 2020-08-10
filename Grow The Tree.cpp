#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, j=0;
    long long x=0, y=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    while(j<n/2){
        y+=v[j];
        x+=v[n-1-j];
        j++;
    }
    if(n%2==1) x+=v[n/2];
    cout<<x*x+y*y;
    return 0;
}
