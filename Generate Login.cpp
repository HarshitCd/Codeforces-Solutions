#include<bits/stdc++.h>
using namespace std;

int main(){
    int i=0;
    string f, l;
    cin>>f>>l;
    cout<<f[i++];
    while(i<f.size() && f[i]<l[0]) cout<<f[i++];
    cout<<l[0];
    return 0;
}
