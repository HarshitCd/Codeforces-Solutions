#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, mx=0;
    map<int, vector<int>> m;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(m[a].size()==0){
            m[a].push_back(1);
            m[a].push_back(i+1);
            m[a].push_back(i+1);
        }
        else{m[a][0]++; m[a][2]=i+1;}
        if(mx==0) mx=a;
        if(m[a][0]>m[mx][0]) mx=a;
        else if(m[a][0]==m[mx][0] && m[a][2]-m[a][1]<m[mx][2]-m[mx][1]) mx=a;
    }

    cout<<m[mx][1]<<" "<<m[mx][2];
    return 0;
}
