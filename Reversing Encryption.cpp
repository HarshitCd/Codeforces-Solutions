#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    for(int i=2; i<=n; i++){
        if(n%i==0){
            string s1=s.substr(0, i);
            reverse(s1.begin(), s1.end());
            s=s1+s.substr(i, n);
        }
    }
    cout<<s;
    return 0;
}
