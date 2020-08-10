#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n+1);
        for(int i=0; i<n; i++){
            cin>>v[i];
            if(i%2==0) v[i] = abs(v[i]);
            else v[i] = abs(v[i])*-1;
        }
        for(int i=0; i<n; i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}
