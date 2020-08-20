#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m, i, j;
    cin>>t;
    vector<int> v(10, 1);
    while(t--){
        bool b;
        cin>>n;
        while(1){
            m=n;
            b=true;
            while(m>0 && b){
                if(m%3==2) b=false;
                m/=3;
            }
            if(b) break;
            n++;
        }
        cout<<n<<endl;
    }
    return 0;
}
