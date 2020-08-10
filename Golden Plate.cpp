#include<bits/stdc++.h>
using namespace std;

int main(){
    int w, h, n, ans=0, i=0;
    cin>>w>>h>>n;
    while(n--){
        ans+=2*(h-4*i+w-4*i)-4;
        i++;
    }
    cout<<ans;
    return 0;
}
