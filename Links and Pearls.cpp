#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int d=0, o=0;
    cin>>s;

    for(char x : s){
        (x=='-')?d++: o++;
    }
    if(o==0) cout<<"YES";
    else
        (d%o==0)?cout<<"YES":cout<<"NO";
    return 0;
}
