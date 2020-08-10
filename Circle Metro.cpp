#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, x, b, y;
    cin>>n>>a>>x>>b>>y;
    a--;
    x--;
    b--;
    y--;
    /*if(a>x && x<b) cout<<"NO";
    else if(b<y && y>a) cout<<"NO";
    else{
        if((a-b)%2==0) cout<<"YES";
        else cout<<"NO";
    }*/
    while(a!=x && b!=y){
        a=(a+1)%n;
        b=(b-1>=0)?b-1:n-1;
        if(a==b){
            cout<<"YES";
            return 0;
        }
        //cout<<a<<" "<<b<<endl;
    }
    cout<<"NO";
    return 0;
}
