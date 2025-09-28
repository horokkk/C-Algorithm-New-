#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >>A >>B;
    cin >>C;
    
    if((B+C%60)>59){
        B=(B+C%60)%60;
        A+=1;
    }
    else{
        B+=(C%60);
    }
    
    if ((A+C/60)>23){
        A=(A+C/60)%24;    
    }
    else{
        A+=(C/60);
    }
    
    cout <<A <<" " <<B;
}