#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    for(int i=10;i<=99;i++){
        if(isPrime(i)&&isPrime(i%10*10+i/10)){
            cout<<i<<endl;
        }
    }
    return 0;
}