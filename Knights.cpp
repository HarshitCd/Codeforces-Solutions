#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i+j)%2==0) cout<<"B";
            else cout<<"W";
        }
        cout<<endl;
    }
    return 0;
}
