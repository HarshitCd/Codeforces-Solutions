#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==1) cout<<-1<<endl;
        else{
            if((n-1)%3==0){
                cout<<3;
                n--;
            }
            while(n-->1) cout<<2;
            cout<<3<<endl;
        }
    }
    return 0;
}
