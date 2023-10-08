#include <bits/stdc++.h>

using namespace std;

#define ll long long 

int main(){
    int n ;

    cin>>n;

    while(n--){
        ll a,b;
        cin>>a>>b;
        if(a==0 || b ==0){
            if(a==0 && b ==0){
                cout<<"YES"<<endl;
            }else cout<<"NO"<<endl;
        }else{
            if((float(float(a)/float(b)) >2.0) || (float(float(b)/float(a)) >2.0)){
                cout<<"NO"<<endl;
            }else{
                if((a+b)%3){
                    cout<<"NO"<<endl;
                }else{
                    cout<<"YES"<<endl;
                }
            }
        }
    }
    return 0;
}