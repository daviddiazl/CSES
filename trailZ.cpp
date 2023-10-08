#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll n;
    ll k = 0;
    int a = 5;
    ll r = 0;

    cin>>n;
    r = n;
    while(r>=5){
        k += (ll)n/(a);
        r  = r/5;
        a *=5;
    }
    


   cout<<k<<endl;
    return 0;
}