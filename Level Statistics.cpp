#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, t;
    cin>>t;
    while(t--){
        int x=0, y=0, f=1, m;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a>>b;
            m=x-y;
            if(f==1 && a-b>=m && a>=x && b>=y){x=a; y=b;}
            else if(f==1){cout<<"NO"; f=0;}
        }
        if(f) cout<<"YES";
        cout<<'\n';
    }
    return 0;
}

/*
24
1
0 0
1
0 1
1
1 0
1
1 1
1
1 2
2
0 0
0 0
2
0 0
0 1
2
0 0
1 0
2
0 0
1 1
2
0 0
1 2
2
0 1
0 0
2
0 1
0 1
2
0 1
0 2
2
0 1
1 0
2
0 1
1 1
2
0 1
1 2
2
0 1
2 0
2
0 1
2 1
2
0 1
2 2
2
0 1
2 3
2
1 0
0 0
2
1 0
0 1
2
1 0
1 0
2
1 0
1 1
*/
