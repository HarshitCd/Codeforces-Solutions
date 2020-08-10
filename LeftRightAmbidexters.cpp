#include<bits/stdc++.h>
using namespace std;

int main(){
    int l, r, a, ans;
    cin>>l>>r>>a;
    int b = abs(l-r);
    if(a>=b) ans = 2*max(l, r) + a-b;
    else ans = 2*(min(l, r) + a);
    ans = (ans%2==0)? ans: ans-1;
    cout<<ans;
    return 0;
}
