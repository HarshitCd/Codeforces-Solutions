#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, h, a, b, k, m, t1, t2, f1, f2;
    cin>>n>>h>>a>>b>>k;
    while(k--){
        cin>>t1>>f1>>t2>>f2;
        if(t1==t2) cout<<abs(f1-f2);
        else{
            if(f1>=a && f1<=b) m=f1;
            else m=(abs(f1-a)>abs(f1-b))?b:a;
            cout<<abs(t1-t2)+ abs(f1-m)+abs(f2-m);
        }
        cout<<endl;
    }
    return 0;
}
