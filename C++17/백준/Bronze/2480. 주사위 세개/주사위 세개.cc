#include <iostream>
using namespace std;

int pickSame(int a, int b, int c){
    if(a==b || a==c) return a;
    if(b==c) return b;
    return -1;
}

int pickMax(int a, int b, int c){
    if(a>b){
        if(a>c) return a;
        else return c;
    }
    else{
        if(b>c) return b;
        else return c;
    }
}

int main(){
    int x, y, z, money;
    cin >>x >>y >>z;
    
    money=(x==y && y==z)?(10000+x*1000):((x==y || y==z || z==x)?(1000+pickSame(x, y, z)*100):(pickMax(x, y, z)*100));
    cout <<money;
}