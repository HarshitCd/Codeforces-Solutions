#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans;
    cin>>n;
    if(n<=10 || n>=22) cout<<0;
    else{
        if(n==20) cout<<15;
        else cout<<4;
    }
    return 0;
}
