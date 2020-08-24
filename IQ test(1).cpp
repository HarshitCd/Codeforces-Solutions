#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, e=0, o=0, m, k, a;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a%2){
            o++;
            m=i+1;
        }
        else{
            e++;
            k=i+1;
        }
    }
    if(e==1) cout<<k;
    else cout<<m;
    return 0;
}
