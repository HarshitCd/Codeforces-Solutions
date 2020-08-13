#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        int i=0, a, s=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        a=v[n-1];
        for(i=n-2; i>=0; i--){
            if(s==0 && v[i+1]>v[i]) s++;
            if(s==1 && v[i+1]<v[i]) s++;
            if(s==2) break;
        }
        cout<<i+1<<endl;
    }
    return 0;
}
