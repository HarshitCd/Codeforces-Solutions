#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s;
    cin>>n>>s;

    if(s/n<2) cout<<"NO";
    else{
        cout<<"YES\n";
        int m = s%n;
        s/=n;
        while(n--){
            if(m>0) cout<<s+1<<" ";
            else cout<<s<<" ";
            m--;
        }
        cout<<endl<<1;
    }
    return 0;
}
