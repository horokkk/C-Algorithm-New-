#include <iostream>
using namespace std;

int main(){
    int H, M;
    cin >>H >>M;

    if(M>=45){
        M-=45;
    } 
    else{
        M+=15;            
        H= (H==0)? 23:H-1;
    }
    cout <<H <<" " <<M <<endl;
}