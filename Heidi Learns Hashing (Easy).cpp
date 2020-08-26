#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    if(n%2==0 || n<4) cout<<"NO";
    else{
        n-=3;
        cout<<1<<" "<<n/2;
    }
    return 0;
}
