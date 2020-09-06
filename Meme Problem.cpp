#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    double d, a;
    cin>>t;
    while(t--){
        cin>>d;
        if(d==1 || d==3 || d==2) cout<<"N\n";
        else{
            a = (d+sqrt(d*d-4*d))/2;
            printf("Y %.9lf %.9lf\n", a, d-a);
        }
    }
    return 0;
}
