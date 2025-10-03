#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, v;
    cin >>N;
    
    vector<int> A(N);
    for(int i=0;i<N;i++) cin >>A[i];

    cin >>v;
    int count=0;
    
    for (int i=0;i<N;i++) {
        if (A[i]==v) {
            count++;
        }
    }
    
    cout <<count;
}