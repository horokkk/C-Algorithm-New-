#include <iostream>
#include <string>
using namespace std;

int main(){
    int arr[6];
    for(int i=0;i<6;i++) cin >>arr[i];
    
    int initial[6]={1,1,2,2,2,8};
    for(int i=0;i<6;i++) cout <<initial[i]-arr[i] <<(i==5? '\n':' ');
}