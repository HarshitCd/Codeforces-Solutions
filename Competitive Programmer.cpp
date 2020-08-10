#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum=0, z=0, e=0;
        for(char x: s){
            sum+=x-'0';
            if(x=='0') z++;
            if((x-'0')%2==0) e++;
        }
        if(z && sum%3==0 && e-1>0) cout<<"red\n";
        else cout<<"cyan\n";
    }
    return 0;
}
