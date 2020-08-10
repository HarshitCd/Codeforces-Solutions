#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a, j=0;
    cin>>n>>m;
    vector<int> u(n);
    for(int i=0; i<m; i++){
        cin>>a;
        j=a;
        while(j<=n){
            if(u[j-1]==0){
                u[j-1]=a;
                j++;
            }
            else break;
        }
        n=a;
    }
    for(int x: u) cout<<x<<" ";
    return 0;
}
