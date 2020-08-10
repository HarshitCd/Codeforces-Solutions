#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, x, d, cd=0;
    char a;
    cin>>n>>x;
    for(int i=0; i<n; i++){
        cin>>a>>d;
        if(a=='+') x+=d;
        else if(x<d) cd++;
        else x-=d;
    }
    cout<<x<<" "<<cd;
    return 0;
}

