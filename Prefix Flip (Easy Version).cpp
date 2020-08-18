#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;
    string a, b;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        vector<int> v;
        k=0;
        for(int i=0; i<n; i++){

            if(a[i]!=b[i] && i==0){
                k+=1;
                v.push_back(i+1);
            }
            else if(a[i]!=b[i]){
                k+=3;
                v.push_back(i+1);
                v.push_back(1);
                v.push_back(i+1);
            }
        }
        cout<<k<<" ";
        for(int x: v) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
