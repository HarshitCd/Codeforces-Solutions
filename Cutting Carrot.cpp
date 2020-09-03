#include<bits/stdc++.h>
using namespace std;

int main(){
    double n, h;
    cin>>n>>h;
    for(int i=1; i<n; i++)
        printf("%.12lf ", sqrt(i)*h/sqrt(n));

    return 0;
}
