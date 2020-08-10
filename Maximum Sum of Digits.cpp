#include<bits/stdc++.h>
using namespace std;

int sumDigits(long long a){
    int s=0;
    while(a){
        s+=a%10;
        a/=10;
    }
    return s;
}

int main(){
    long long n, a, b;
    int i=0;
    cin>>n;
    a=n;
    while(a/10!=0){a/=10; i++;}

    a = a*pow(10, i) - 1;

    cout<<sumDigits(a)+sumDigits(n-a);
    return 0;
}
