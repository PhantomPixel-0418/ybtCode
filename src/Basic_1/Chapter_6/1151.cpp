#include<bits/stdc++.h>
using namespace std;

int n;

bool isprime(int x){
    if(x < 2) return false;
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
    cin >> n;
    int sum=0;
    for(int i = 2; i <= n; i++){
        if(isprime(i)){
            sum ++;
        }
    }
    cout<<sum;
    return 0;
}