#include<bits/stdc++.h>
using namespace std;

int main(){
    int j=0;
    string s, h="hello";
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]==h[j] && j!=5){
            j++;
        }
    }
    if(j!=5) cout<<"NO";
    else cout<<"YES";
    return 0;
}
