#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin>>n;
    a=sqrt(n);
    for(int i=a; i>=1; i--){
        if(n%i==0){
            b=i;
            break;
        }
    }
    cout<<2*(b+n/b);
    return 0;
}
