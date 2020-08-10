#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i=0, ans=1, j=0;
    cin>>n;

    while(n-j){
        ans=++i;
        n-=j;
        j=0;
        while(ans){
            ans/=10;
            j++;
            if(n-j==0) break;
        }
    }

    j=0;
    ans=i;
    while(ans){
        j++;
        ans/=10;
    }
    cout<<int(i%int(pow(10, j-n+1))/pow(10, j-n));


    return 0;
}
