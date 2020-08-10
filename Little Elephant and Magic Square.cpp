#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v(3, vector<int>(3));
    vector<int> s(3);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>v[i][j];
            s[i]+=v[i][j];
        }
    }

    int sum = s[0]+s[1]+s[2];
    sum/=2;
    v[0][0] = sum-s[0];
    v[1][1] = sum-s[1];
    v[2][2] = sum-s[2];



    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++) cout<<v[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
