#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, mi, mx, c, m1=1, m2=1, i;
    cin>>n>>m>>mi>>mx;

    for(i=0; i<m; i++){
        cin>>c;
        if(c==mi) m1=0;
        else if(c==mx) m2=0;
        else if(c<mi || c>mx) break;
    }
    if(i!=m || m1+m2>n-m) cout<<"Incorrect";
    else cout<<"Correct";

    return 0;
}
