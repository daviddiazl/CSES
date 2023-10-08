#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll n,r=0;
    cin>>n;
    for(int i = 1;i<n;i++){
        int a;
        cin>>a;
        r += a; 
    }
    cout<<((n*(n+1))/2) -r<<endl;
    return 0; 
}