#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(b){
        a%=b;
        swap(a, b);
    }
    return a;
}

int main(){
    int n, a, g, j=0, c=0;
    cin>>n;
    vector<int> v;
    cin>>a;
    v.push_back(a);
    for(int i=1; i<n; i++){
        cin>>a;
        g=gcd(a, v[j]);
        if(g!=1){v.push_back(1); j++; c++;}
        v.push_back(a);
        j++;
    }
    cout<<c<<endl;
    for(int x: v) cout<<x<<" ";
    return 0;
}
