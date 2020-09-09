#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, i=1, c=0;
    cin>>n;

    while(n-i>0){
        n-=i;
        i*=2;
        c++;
    }
    cout<<c+1;
    return 0;
}
