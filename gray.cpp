#include<bits/stdc++.h>

using namespace std;

#define ll long long 

int main(){
    int n ;
    ll  k = 1;

    cin>>n;
    int c[n]{};
    while(n--){
        k *= 2;
    }
    for(int i = 0; i<k ; i++){
        for(int j = 0; j<n ;j++){
            cout<<c[j];
        }
        cout<<endl;
    }

}