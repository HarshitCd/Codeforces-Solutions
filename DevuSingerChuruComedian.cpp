#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d, sum=0, b;
    cin>>n>>d;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        sum+=v[i];
    }
    b=sum;
    sum+=10*(n-1);
    if(sum>d) cout<<-1;
    //else if((d-b)%5!=0) cout<<-1;
    else cout<<(d-b)/5;
    return 0;

}
