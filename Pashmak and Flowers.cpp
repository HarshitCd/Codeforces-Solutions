#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d, a;
    long long sum=0;
    cin>>n;
    set<long long> s;
    map<long long, long long> m;
    for(int i=0; i<n; i++){cin>>a; m[a]++; s.insert(a);}

    d = *s.rbegin()-*s.begin();
    cout<<d<<" ";
    if(d==0) cout<<m[*s.begin()]*(m[*s.begin()]-1)/2;
    else{
        cout<<m[*s.begin()]*m[*s.rbegin()];
    }
    return 0;
}
