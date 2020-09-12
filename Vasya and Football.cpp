#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    map<char, map<int, int>> m, out;
    char card, c;
    int time, player;
    string home, away;
    cin>>home>>away>>n;

    for(int i=0; i<n; i++){
        cin>>time>>c>>player>>card;
        if(card == 'y'){
            m[c][player]++;
            if(m[c][player]==2){
                if(out[c][player]) continue;
                if(c=='a') cout<<away<<" ";
                else cout<<home<<" ";
                cout<<player<<" "<<time<<endl;
                out[c][player]++;
            }
        }
        else{
            if(out[c][player]) continue;
            if(c=='a') cout<<away<<" ";
            else cout<<home<<" ";
            cout<<player<<" "<<time<<endl;
            out[c][player]++;
        }
    }
    return 0;
}
