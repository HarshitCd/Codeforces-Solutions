#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long a, b, c, d, e, f, g;
        cin>>a>>b>>c>>d;
        g=b;
        a-=b;

        if(d-c<0 && a>=0){
            a = (a%(-d+c)==0)?c*a/(c-d): c*(a/(c-d)+1);
            cout<<a+b<<endl;
        }
        else if(a<=0) cout<<b<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
