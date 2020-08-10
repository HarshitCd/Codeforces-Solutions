#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, i;
    cin>>t;
    for(int j=0; j<t; j++){
        string a, b, c;
        cin>>a>>b>>c;
        for(i=0; a[i]!='\0'; i++){
            if(a[i]==b[i] && a[i]!=c[i]){
                cout<<"NO\n";
                break;
            }
            else if(a[i]!=b[i] && a[i]!=c[i] && b[i]!=c[i]){
                cout<<"NO\n";
                break;
            }

        }
        if(a[i]=='\0') cout<<"YES\n";
    }
    return 0;
}
