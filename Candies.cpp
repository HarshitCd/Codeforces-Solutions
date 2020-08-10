#include<bits/stdc++.h>
using namespace std;

int Candies(int n){
    int k=4, m=3;
    while(n%m!=0){
        m+=k;
        k*=2;
    }
    return n/m;
}

int main(){
    int t, n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        cout<<Candies(n)<<endl;
    }
    return 0;
}
