#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int i=0, m=0;

    while(v[i]==v[n-1]) i++;
    m=n-1-i;
    i=n-1;
    while(v[0]==v[i]) i--;

    cout<<max(m, i);
    return 0;
}
