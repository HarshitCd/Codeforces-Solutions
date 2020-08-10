#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, j=1;
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        if(2*n+j<=m){
            cout<<2*n+j<<" ";
            i++;
        }
        cout<<j<<" ";
        j++;
    }
    return 0;
}
