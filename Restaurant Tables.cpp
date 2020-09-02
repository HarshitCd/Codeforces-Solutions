#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, a, b, g, k=0, c=0;
    cin>>n>>a>>b;
    for(long long i=0; i<n; i++){
        cin>>g;
        if(g==1 && a!=0) a--;
        else if(g==1 && a==0 && b!=0){c++; b--;}
        else if(g==1 && c!=0) c--;
        else if(g==2 && b!=0) b--;
        else k+=g;
    }
    cout<<k;
    return 0;
}
