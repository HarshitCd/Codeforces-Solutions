#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, m=0;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>a;
        v[i] = (a-i)%n? (a-i)/n+1: (a-i)/n;
        v[i] = (a<i)? 0: v[i];
        if(v[m]>v[i]) m=i;
    }

    cout<<m+1;
    return 0;
}
