#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int a=240-k, i=0;
    //cout<<a<<" "<<i<<endl;
    while(a>=0 && i<=n){
        i++;
        a-=i*5;
    }
    //cout<<a<<" "<<i<<endl;
    cout<<i-1<<endl;
    return 0;
}
