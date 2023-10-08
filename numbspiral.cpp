#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll t,x,y;
    ll r = 0;
    ll m = 0;
    cin>>t;
    while(t--){
        cin>>y>>x;
        m = max(y,x);
        if(m == y){
            if(y%2==0){
                r = y*y-x+1;
            }else{
                r = (y-1)*(y-1)+x;
            }
        }else{
            if(x%2){
                r = x*x-y+1;
            }else{
                r = (x-1)*(x-1)+y;
            }
        }
        cout<<r<<endl;


    }
}