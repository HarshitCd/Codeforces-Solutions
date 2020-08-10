#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, x;
    cin>>t;
    for(int j=0; j<t; j++){
        cin>>n;
        if(n%3==0 || n%7==0) cout<<"YES\n";
        else {
            for(int i=0; i<33; i++){
               x = n-i*3;
               if(x>0 && x%7==0){
                    cout<<"YES\n";
                    break;
               }
            }
            if(x<0 || x%7!=0) cout<<"NO\n";
        }
    }
    return 0;
}
