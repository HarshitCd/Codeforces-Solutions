#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, c=0, pow=0;
    cin>>n>>a>>b;

    a--; b--;

    while(a!=b){
        a/=2;
        b/=2;
        c++;
    }

    while(n!=1){pow++; n/=2;}

    if(c==pow) cout<<"Final!";
    else cout<<c;

    return 0;
}
