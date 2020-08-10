#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, c=1, m=0;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    a=v[0];
    for(int i=1; i<n; i++){
        if(a<v[i]) c++;
        else{
            m=max(m, c);
            c=1;
        }
        a=v[i];
    }
    cout<<max(m, c);
    return 0;
}
