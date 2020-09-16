#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, k=1;
    cin>>a>>b>>c;
    int n = (a%b)*10;
    vector<set<int>> v(10);

    while(n/b!=c){
        if(v[n/b].find(n) != v[n/b].end()) break;
        v[n/b].insert(n);
        n = (n%b)*10;
        k++;
    }

    if(n/b==c) cout<<k;
    else cout<<-1;
    return 0;
}
