#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s=0, m=0, a;
    cin>>n;
    set<int> v;
    for(int i=0; i<n; i++){
        cin>>a;
        v.insert(a);
    }
    n = v.size();
    int x = *(++v.begin());
    a = *(v.begin());
    if(n==2 && (x-a)%2==0){cout<<(x-a)/2; return 0;}
    if(n>3){cout<<-1; return 0;}
    for(int x: v){
        if(a-x==0) continue;
        else if(s==0){m=x-a; s++;}
        else if((x-a)!=m){cout<<-1; return 0;}
        a=x;
    }
    cout<<m;
    return 0;
}
