#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, x, y, n;
    cin>>t;
    while(t--){
        cin>>x>>y>>n;
        n = (n>=n-n%x+y)?n-n%x+y:n-n%x+y-x;
        cout<<n<<endl;
    }
    return 0;
}
