#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, ini, s=0;
    cin>>n>>a>>b;
    vector<int> v(n-1);
    cin>>ini;
    s+=ini;
    for(int i=0; i<n-1; i++){cin>>v[i]; s+=v[i];}
    sort(v.rbegin(), v.rend());
    int ss = a*ini/b;
    int i=0;
    while(s>ss){
        s-=v[i];
        i++;
    }
    cout<<i;
    return 0;
}
