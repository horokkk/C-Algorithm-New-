#include <iostream>
using namespace std;

int main(){
    string s;
    int N, sum=0;
    
    cin >>N >>s;
    for (int i=0;i<N;i++) sum+=s[i]-'0';
    cout <<sum;
}