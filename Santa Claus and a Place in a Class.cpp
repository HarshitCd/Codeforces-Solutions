#include<bits/stdc++.h>
using namespace std;

int main(){
    int l, d, n;
    cin>>l>>d>>n;
    int a = (n%2==0)? n/2: n/2+1;
    int lane = (a%d==0)?a/d: a/d+1;
    int desk = (a%d==0)? d: a%d;
    cout<<lane<<" "<<desk<<" ";
    (n%2==0)? cout<<"R": cout<<"L";
    return 0;
}
