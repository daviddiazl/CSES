#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll n;
    ll r = 0;
    cin>>n;
    ll a[n];
    for(int i = 0; i<n;i++){
        ll x;
        cin>>x;
        a[i] = x;
    }
    ll m = a[0];
    for(int i = 1; i<n;i++){
        ll w = m-a[i];
        if(w>0){
            r +=w;
            //m = a[i]+w;
        }else{
            m = a[i];
        }
    }
    cout<<r<<endl;
    return 0;
}