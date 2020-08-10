#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a, b=0, ans=0;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>a;
            if(a==1) b++;
            if(b==2){
                ans++;
                b=0;
            }
        }
        b=0;
    }
    cout<<ans<<endl;
    return 0;
}
