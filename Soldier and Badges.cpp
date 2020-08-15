#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    int a=0, c=0;
    for(int i=0; i<n; i++){
        while(a>=v[i]){v[i]++; c++;}
        a=v[i];
    }
    cout<<c;
    return 0;
}
