#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a = n/2;
    n = (n%2)? n/2+1: n/2;

    cout<<(a+1)*n;
    return 0;
}
