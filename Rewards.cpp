#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, c_sum=0, b, m_sum=0, n, sum=0;
    for(int i=0; i<3; i++){
        cin>>a;
        c_sum+=a;
    }
    for(int i=0; i<3; i++){
        cin>>b;
        m_sum+=b;
    }
    cin>>n;
    sum+=(m_sum%10==0)?m_sum/10:m_sum/10+1;
    sum+=(c_sum%5==0)?c_sum/5:c_sum/5+1;
    (n>=sum)?cout<<"YES":cout<<"NO";
    return 0;
}
