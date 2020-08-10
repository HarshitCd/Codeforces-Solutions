#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, su=0, sd=0, i=0;
    char c, d;
    string s;
    cin>>n>>s;
    for(int i=0; i<n; i++){
        if(s[i]=='x') sd++;
        else su++;
    }
    n=abs(sd-n/2);
    cout<<n<<"\n";
    c=(sd>su)?'x':'X';
    d=(sd<su)?'x':'X';
    while(n!=0){
        if(s[i]==c){
            s[i]=d;
            n--;
        }
        i++;
    }
    cout<<s;
    return 0;
}
