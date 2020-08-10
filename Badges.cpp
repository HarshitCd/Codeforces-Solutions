#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, b, g;
    cin>>b>>g>>n;
    cout<<min(b, n)-(n-min(g, n))+1;
    return 0;
}
