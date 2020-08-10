#include<bits/stdc++.h>
using namespace std;

int main(){
    int c, v0, v1, a, l, cnt, tmp, g=0;
    cin>>c>>v0>>v1>>a>>l;
    cnt = 1;
    tmp = v0;/*
    while (tmp < c)
    {
        tmp -= l;
        v0 += a;
        v0 = min(v0, v1);
        tmp += v0;
        tmp = min(c, tmp);
        cnt++;
    }

    printf("%d\n", cnt);*/

    c-=v0;
    while(c>=0){
        c-=(v0+g*a-l>v1)?v1-l:(v0+g*a-l);
        g++;
    }
    cout<<g;
    return 0;
}
