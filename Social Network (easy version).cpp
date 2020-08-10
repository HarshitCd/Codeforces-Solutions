#include<bits/stdc++.h>
using namespace std;

bool isThere(deque<int>& q, int a){
    for(int x: q){
        if(a==x) return true;
    }
    return false;
}

int main(){
    int n, k, m, a;
    cin>>n>>k;
    deque<int> q;
    m=min(n, k);
    for(int i=0; i<n; i++){
        cin>>a;
        if(q.size()<m && !isThere(q, a)){
            q.push_front(a);
        }
        else if(q.size()==m && !isThere(q, a)){
            q.pop_back();
            q.push_front(a);
        }
    }
    cout<<q.size()<<"\n";
    for(int x: q) cout<<x<<" ";
    return 0;
}
