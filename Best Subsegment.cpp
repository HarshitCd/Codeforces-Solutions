#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=-1, n, c=0, m=0, b;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>b;
        if(a<b){a=b; c=1; m=1;}
        else if(a==b) c++;
        else{m=max(m, c); c=0;}
    }
    cout<<max(m, c);
    return 0;
}
