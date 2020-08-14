#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s=0, c=0;
    long long es=0, os=0, ep=0, op=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    for(int i=0; i<n; i++){
        if(i%2==0) os+=v[i];
        else es+=v[i];
    }

    for(int i=0; i<n; i++){
        if(i%2==0) os-=v[i];
        else es-=v[i];
        if(os+ep==op+es) c++;
        if(i%2==0) op+=v[i];
        else ep+=v[i];
    }

    cout<<c;
    return 0;
}
