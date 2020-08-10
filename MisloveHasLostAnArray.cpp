#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l, r, mi_sum=0, ma_sum=0, a=1, b=2, j=-1;
    cin>>n>>l>>r;
    for(int i=0; i<r-1; i++) a*=2;
    int c=a;
    for(int i=1; i<=n; i++){
        if(i<=n-l+1){
            mi_sum+=1;
            j++;
        }
        else{
            mi_sum+=b;
            b*=2;
        }
        if(c>=1){
            ma_sum+=c;
            c/=2;
        }
        else ma_sum+=a;
        //cout<<ma_sum<<"-";
    }
    cout<<mi_sum<<" "<<ma_sum;
    return 0;
}
