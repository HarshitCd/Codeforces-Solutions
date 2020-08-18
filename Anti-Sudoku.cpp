#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v(9);
    int t;
    cin>>t;
    while(t--){
        for(int i=0; i<9; i++) cin>>v[i];

        v[0][0] = v[0][1];
        v[1][4] = v[1][5];
        v[2][8] = v[2][6];

        v[3][1] = v[3][2];
        v[4][5] = v[4][3];
        v[5][6] = v[5][7];

        v[6][2] = v[6][0];
        v[7][3] = v[7][4];
        v[8][7] = v[8][8];

        cout<<endl;
        for(string x: v){
            cout<<x;
            cout<<endl;
        }
    }

    return 0;
}
