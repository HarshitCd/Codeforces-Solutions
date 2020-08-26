#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a = n%2? n/2+1: n/2;
    for(int i=0; i<n; i++){
        for(int j=0; j<a; j++){
            cout<<n*n-j*n-i<<" ";
        }
        for(int j=0; j<n-a; j++){
            cout<<1+j*n+i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
