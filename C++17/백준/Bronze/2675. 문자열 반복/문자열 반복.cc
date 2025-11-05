#include <iostream>
using namespace std;

int main() {
    int S; 
    cin >>S;
    while (S--) {
        int n; 
        string S;
        cin >>n >>S;
        for (int i=0;i<(int)S.length();i++) cout <<string(n, S[i]);
        cout << '\n';
    }
}
