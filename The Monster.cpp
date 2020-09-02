#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, m=1e9, y=0, an, bn;
    set<int> s;
    cin>>a>>b>>c>>d;
    b-=a; d-=c;
    for(int i=0; i<10000; i++){
        b+=a;
        d+=c;
        if(!s.insert(b).second){
            cout<<b;
            return 0;
        }
        if(!s.insert(d).second){
            cout<<d;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}
