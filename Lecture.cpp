#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    string a, b;
    map<string, string> ma;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        cin>>a>>b;
        if(a.size()<=b.size()){
            ma[a]=a;
            ma[b]=a;
        }
        else{
            ma[a]=b;
            ma[b]=b;
        }
    }
    for(int i=0; i<n; i++){
        cin>>a;
        cout<<ma[a]<<" ";
    }
    return 0;
}
