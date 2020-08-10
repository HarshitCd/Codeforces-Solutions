#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m1, m2;
    cin>>n;
    int c=(n%7==6)?1:0;
    m2=m1=2*(n/7)+c;
    if(n%7!=0) m1+=(n%7==1)?1:(n%7>=2 && n%7==6)?1:2;
    cout<<m2<<" "<<m1<<endl;
    return 0;
}

