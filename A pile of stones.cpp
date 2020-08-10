#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a=0, r;
    char c;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>c;
        if(c=='-' && a!=0) a--;
        else if(c=='+') a++;
    }
    cout<<a;
    return 0;
}
