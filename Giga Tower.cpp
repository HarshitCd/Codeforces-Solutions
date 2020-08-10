#include<bits/stdc++.h>
using namespace std;

bool lucky(int n){
    while(n){
        if(n%10==8) return true;
        n/=10;
    }
    return false;
}

int main(){
    int n, i=1;
    cin>>n;
    while(!lucky(abs(n+i))) i++;
    cout<<i;

    return 0;
}
