#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, j=1;
    cin>>n;
    vector<int> v(n);
    int u[]={1, 2};
    for(int i=0; i<n; i++) cin>>v[i];
    for(int x: v){
        if(x%2==0) j++;
        cout<<u[j%2]<<endl;
    }
    return 0;
}
