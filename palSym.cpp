#include <bits/stdc++.h>

using namespace std;

#define ll long long;

int main(){

    string s;
    int a = -1;
    vector<char> vc;
    int vn[26]{}, c1 = 0;
    bool posible = false;
    cin>>s;
    for(char d: s){
        ++vn[d-'A'];//Para saber cuantas repes hay de cada letra
    }
    for(int i = 0 ; i<26 ; i++){
        c1+= vn[i]&1; //Para saber si el num de repes es impar
    }
    if(c1>1){
        cout<<"NO SOLUTION";
    }else{
        string x = "";
        int a;
        for(int i = 0; i< 26 ; i++ ){
            if(vn[i]&1){
                a = i;
                posible = true;
            }else{
                for(int j = 0; j<vn[i]/2; j++){
                    x+= (char)('A' + i);
                }
            }
        }
        cout<< x;
        if(posible){
            for(int i = 0; i<vn[a] ; i++){
            cout<<(char)('A'+a);
            }
        }
        reverse(x.begin(),x.end());
        cout<<x;
    }
    
}