#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    if(m>n){cout<<-1; return 0;}

    int a = (n%2==0)? n/2: n/2+1;
    a = (a%m==0)? a: a+(m-a%m);

    cout<<a;

    return 0;
}

