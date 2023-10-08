#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    string s;
    ll max = 0;
    string cad = "ACGT";
    cin>>s;
    for(char c : cad ){
        ll n = 0;
        for(int i = 0;i<s.length();i++){
            if(s[i] == c){
                n ++;
            }else{
                n = 0;
            }
            if(n>max){
                max = n;
            }
        }
    }
    cout<<max<<endl;
    return 0;
}