#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, r, t=1;
    cin>>k>>r;
    int n=k%10, m;
    while(n!=0 && n!=r){
        t++;
        m=k*t;
        n=m%10;
    }
    cout<<t<<endl;
}
