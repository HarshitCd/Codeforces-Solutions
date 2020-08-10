#include<bits/stdc++.h>
using namespace std;

int main(){
    string a, b, d, c;
    int n;
    cin>>a>>b>>n;
    for(int i=0; i<n; i++){
        cout<<a<<" "<<b<<endl;
        cin>>d>>c;
        if(d==a) a=c;
        else b=c;
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
