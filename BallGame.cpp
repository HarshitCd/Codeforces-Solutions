#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a=1;
    cin>>n;

    for(int i=1; i<n; i++){
        a+=i;
        a=(a%n==0)? a: a%n;
        cout<<a<<" ";
    }
    return 0;
}
