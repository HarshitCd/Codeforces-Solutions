#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, x=0;
    cin>>n>>a>>b;


    while(n-a*x>=0){
        if((n-a*x)%b==0) break;
        else x++;
    }
    if(n-a*x<0) cout<<"NO";
    else cout<<"YES\n"<<x<<" "<<(n-a*x)/b;
    return 0;
}
