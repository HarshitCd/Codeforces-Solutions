#include<bits/stdc++.h>
using namespace std;

int Make_Triangles(int a, int b, int c){
    int m = (a>b)?((a>c)?a:c):((b>c)?b:c);
    int sum=a+b+c;
    int x=2*m-sum+1;
    int ans=(x>0)?x:0;
    return ans;
}

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<Make_Triangles(a, b, c);
    return 0;
}
