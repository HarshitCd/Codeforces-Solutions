#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, l, r, sum;
    cin>>n;
    for(int i=0; i<n; i++){
        sum=0;
        cin>>l>>r;
        if(r%2==0) sum=r/2;
        else sum=-(r+1)/2;
        if((l-1)%2==0) sum-=(l-1)/2;
        else sum-=-(l)/2;
        cout<<sum<<endl;
    }
    return 0;
}
