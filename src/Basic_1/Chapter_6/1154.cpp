#include<bits/stdc++.h>
using namespace std;

int factor(int n){
    int sum=1;
    if(n==1) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            sum+=i;
            if(i!=n/i) sum+=n/i;
        }
    }
    return sum;
}

int main()
{
    int a=2;
    while(1){
        int b=factor(a);
        if(b>a&&factor(b)==a){
            cout<<a<<" "<<b<<endl;
            break;
        }
        a++;
    }
    return 0;
}