#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    int n;
    ll r;
    int contNum = 1; //cuenta los numeros para restar en la casilla superior
    int contReps1 = 1; // cuenta las repeticiones de las casillas de en medio
    int contReps2 = 1;
    cin>>n;
    cout<<0<<endl;
    for(int i= 2; i<=n;i++){
        ll n2 = i*i;
        r = ((n2-1)*n2)/2;
        if(i ==2){
            contNum++;
        }else if(i<5){
            r -= (4 + contNum*contReps1)*(i-2)+2*(i-2);
            contNum++;
            contReps1++;
        }else{
            r -= (10+4*contReps2)*(i-2) + (4+2*contReps2);
            contReps2++;
        }
        cout<<r<<endl;
    }
}