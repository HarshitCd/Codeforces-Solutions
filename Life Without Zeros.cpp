#include<bits/stdc++.h>
using namespace std;

int removeZeroes(int a){
    int b=0, i=0;
    while(a){
        if(a%10){
            b+=(a%10)*pow(10, i);
            i++;
        }
        a/=10;
    }
    return b;
}

int main(){
    int a, b, c, d;
    cin>>a>>b;
    c=a+b;
    a=removeZeroes(a);
    b=removeZeroes(b);
    c=removeZeroes(c);
    if(c==a+b) cout<<"YES";
    else cout<<"NO";
    return 0;
}
