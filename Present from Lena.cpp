#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a;
    cin>>n;
    for(int i=0; i<=n; i++){
        a=0;
        for(int j=0; j<=n+i; j++){
            if(j>=n){
                cout<<a;
                a--;
            }
            else if(j>=n-i){
                cout<<a;
                a++;
            }
            else cout<<" ";
            if(j!=n+i) cout<<" ";
        }
        cout<<"\n";
    }
    for(int i=n-1; i>=0; i--){
        a=0;
        for(int j=0; j<=n+i; j++){
            if(j>=n){
                cout<<a;
                a--;
            }
            else if(j>=n-i){
                cout<<a;
                a++;
            }
            else cout<<" ";
            if(j!=n+i) cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
