#include <iostream>
using namespace std;

int main(){
    int N; 
    cin >>N;
    
    for (int i=1; i<=N; ++i) {
        for (int s=0; s<N-i; ++s) cout <<' ';
        for (int a=0; a<i; ++a) cout <<'*';
        cout <<'\n';
    }
}