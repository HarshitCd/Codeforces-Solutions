#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, c=0;
    long long n;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        while(n!=1){
            if(n%5==0)
                n=4*n/5;
            else if(n%3==0)
                n=2*n/3;
            else if(n%2==0)
                n/=2;
            else break;
            c++;
        }
        if(n!=1) cout<<-1;
        else cout<<c;
        cout<<"\n";
        c=0;
    }
}
