#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a=1, b=1;
    cin>>n;
    vector<int> v;
    string c(n, 'o');
    while(b<=n){
        v.push_back(b);
        int tmp=b;
        b+=a;
        a=tmp;
    }
    for(int x: v){
        c[x-1]='O';
    }
    cout<<c;
    return 0;
}
