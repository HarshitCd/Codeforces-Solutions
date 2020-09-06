#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, i;
    cin>>n;
    vector<int> v(n);
    map<int, int> m1, m2;
    for(i=0; i<n; i++){
        cin>>v[i];
        m1[v[i]]++;
        m2[m1[v[i]]]++;
    }
    i=1; a=0;
    while(m2[i]){
        a=a+m2[i]-1;
        i++;
    }
    cout<<a;
    return 0;
}
