#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, a, b;
    int i=0;
    cin>>n;
    a=n;
    while(a/10!=0){
        i++;
        a/=10;
    }
    b=a+1;
    while(i--){
        b*=10;
    }
    cout<<b-n;
    return 0;
}
