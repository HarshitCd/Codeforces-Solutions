#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, x, y;
    cin>>a>>b>>x>>y;

    if(a==x && b==y){a--; b--; cout<<2*(abs(a-x)+abs(b-y)+2)+4;}
    else if(a==x || b==y){cout<<2*(abs(a-x)+abs(b-y)+1)+4;}
    else {cout<<2*(abs(a-x)+abs(b-y)+2);}
    return 0;
}
