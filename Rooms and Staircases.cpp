#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        int ma=-1, mi=n;
        if(count(s.begin(), s.end(), '0')==n) cout<<n<<endl;
        else{
            for(int i=0; i<n; i++){
                if(s[i]=='1'){
                    if(i<mi) mi=i;
                    if(i>ma) ma=i;
                }
            }
            cout<<max(2*(n-mi), 2*(ma+1))<<endl;
        }
    }
    return 0;
}
