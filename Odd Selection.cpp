#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, x, a;
    cin>>t;
    while(t--){
        int o=0, e=0;
        cin>>n>>x;
        for(int i=0; i<n; i++){
            cin>>a;
            (a%2==0)?e++:o++;
        }
        a=x;
        if(o==0) cout<<"No";
        else{
            x-=e;
            x=(x<=0)?1:x;
            if(x%2==0){
                x+=(x+1>a)?0:1;
                if(x%2==0 || x>o) cout<<"No";
                else cout<<"Yes";
            }
            else cout<<"Yes";
        }
        cout<<endl;
    }
    return 0;
}
