#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int, int>> v(3);
    for(int i=0; i<3; i++) cin>>v[i].first>>v[i].second;

    cout<<3<<endl;
    for(int i=0; i<3; i++){
        cout<<v[(i+1)%3].first + v[(i+2)%3].first - v[i].first<<" ";
        cout<<v[(i+1)%3].second + v[(i+2)%3].second - v[i].second<<endl;
    }
    return 0;
}
