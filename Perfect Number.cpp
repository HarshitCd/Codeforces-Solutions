#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int a){
    int s=0;
    while(a && s<=10){
        s+=a%10;
        a/=10;
    }
    return s;
}

int main(){
    int n, i=19, c=0;
    cin>>n;

    while(c!=n){
        if(sumOfDigits(i)==10) c++;
        i++;
    }
    cout<<i-1;
    return 0;
}
