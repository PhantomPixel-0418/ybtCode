#include<bits/stdc++.h>
using namespace std;

int a,b,c;

int max(int x,int y,int z){
    return max(max(x,y),z);
}

double m(int x,int y,int z){
    return (double)(max(x,y,z)) / ((double)(max(x+y,y,z)*max(x,y,y+z)));
}

int main(){
    cin>>a>>b>>c;
    printf("%.3lf",m(a,b,c));
    return 0;
}