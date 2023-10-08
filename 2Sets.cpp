#include <bits/stdc++.h>

using namespace std;

#define ll long long 

int main(){
    int n;
    bool b = true; //Booleano para saber si se mueve 1 paso o 2 
    int o = 1;
    int a = 0;
    int k=0;

    cin>>n;

    if(((n*(n+1))/2)%2){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        /*
        if(n%2){
            k = n/2 +1;
        }else{
            k = n/2;
        }
        */
        k = (int)n/2;
        cout<<k<<endl;
        for(int i = 0; i<k;i++){
            cout<<n-a<<" ";
            if(b){
                a+=3;
                b = false;
            }else{
                a++;
                b = true;
            }
        }
        b = true;
        cout<<endl;
        cout<<n-k<<endl;
        for(int i = 0;i<(n-k);i++){
            cout<<n-o<<" ";
            if(b){
                o ++;
                b = false;
            }else{
                o+=3;
                b = true;
            }
        }
    }
}