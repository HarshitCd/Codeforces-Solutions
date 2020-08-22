#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a;
    set<int> s;
    cin>>n>>m;
    vector<int> v(n), u;
    for(int i=0; i<n; i++){cin>>a; s.insert(a);}
    a=1;
    while(m-a>=0){
        if(s.find(a)==s.end()){u.push_back(a); m-=a;}
        a++;
    }
    cout<<u.size()<<"\n";
    for(int x: u) cout<<x<<" ";
    return 0;
}
