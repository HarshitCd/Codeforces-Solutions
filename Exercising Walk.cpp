/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int a, b, c, d;
    int u, v;
    int x[2], y[2];
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        a=a-b;
        c=c-d;
        cin>>u>>v;
        cin>>x[1]>>y[1]>>x[2]>>y[2];
        //cout<<u<<"-"<<v<<endl;


        u=u-a+b;
        v=v-c+d;
        //cout<<a<<"-"<<c<<endl;
        //cout<<u<<"-"<<v<<endl;
        if((u>=x[1] && u<=x[2]) && (v>=y[1] && v<=y[2]) && (x[2]>x[1] || a+b) && (y[2]>y[1] || c+d)) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int a,b,c,d,x,y,x1,y1,x2,y2,xx,yy;

int main(){
    int t;
    cin>>t;
    while (t--){
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        xx=x,yy=y;
        x+=-a+b, y+=-c+d;
        if (x>=x1&&x<=x2&&y>=y1&&y<=y2&&(x2>x1||a+b==0)&&(y2>y1||c+d==0)){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}
