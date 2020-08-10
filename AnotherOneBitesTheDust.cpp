#include<bits/stdc++.h>
using namespace std;

long long Good_String(int a, int b, int c){
    long long ans=0;
    if(a-b==0)
        ans+=a+b;
    else
        ans+=(a-b)>0?2*b+1:2*a+1;
    return ans+2*c;
}

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<Good_String(a, b, c);
    return 0;
}
