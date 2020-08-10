#include<bits/stdc++.h>
using namespace std;

int fun(vector<int>& v, int m){
    int s=0;
    for(int x: v){
        if(x==m) continue;
        s+=abs(x-m)-1;
    }
    return s;
}

int main(){
    int n, s=0;
    cin>>n;
    map<int, int> m;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        s+=v[i];
        m[v[i]]++;
    }

    int a=INT_MAX, b;

    for(int i=1; i<=100; i++){
        int c=fun(v, i);
        if(a>c){a=c; b=i;}
    }
    cout<<b<<" "<<a;
    return 0;
}

/*
113
86 67 31 33 72 100 88 63 16 12 79 80 76 45 31 96 44 10 24 33 53 11 56 100 23 57 9 48 28 73 18 48 12 89 73 9 51 11 82 94 90 92 34 99 54 58 33 67 35 87 58 90 94 64 57 80 87 99 84 99 20 1 63 12 16 40 50 95 33 58 7 23 71 89 53 15 95 29 71 16 65 21 66 89 82 30 6 45 6 66 58 32 27 78 28 42 8 61 10 26 7 55 76 65 100 38 79 1 23 81 55 58 38

*/
