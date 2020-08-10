#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a, b, tmp, ans=0, ma, mi;
        cin>>a>>b;
        if(a>b){
            ma=a;
            mi=b;
        }
        else{
            ma=b;
            mi=a;
        }
        while(ma%mi!=0){
            ans+=ma/mi;
            tmp=mi;
            mi=ma%mi;
            ma=tmp;
        }
        cout<<ans+ma/mi<<"\n";
    }
    return 0;
}
