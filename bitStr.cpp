#include <bits/stdc++.h>

using namespace std;

#define ll long long 

int main(){
    int n;
    ll k = 1;


    cin>>n;

    while(n--){
        k = ((k*2)%((int)1e9 +7));
    }
    cout<<k<<endl;


    
}