#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w;
    cin>>k>>n>>w;
    w=w*(w+1)/2;
    w=k*w-n;
    w=(w<0)?0:w;
    cout<<w;
    return 0;
}
