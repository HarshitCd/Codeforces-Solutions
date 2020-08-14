#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    long long a=0, b=n-1, s1=0, s3=0;
    while(a<=b){
        while(a<=b && s1<s3) s1+=v[a++];
        while(a<=b && s1>s3) s3+=v[b--];
        if(s1==s3){m=s1; s1+=v[a++];}
        //cout<<a<<" "<<b<<endl;
    }
    cout<<m;
    return 0;
}
