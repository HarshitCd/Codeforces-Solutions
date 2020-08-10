#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=1; i<n-1; i++){
        if(v[i]==0){
            if(v[i-1]==v[i+1] && v[i+1]==1){v[i+1]=0; k++;}
        }
    }
    cout<<k;
    return 0;
}
