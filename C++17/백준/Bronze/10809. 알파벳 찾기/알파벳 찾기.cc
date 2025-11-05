#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (char c='a'; c<='z'; ++c) {
        size_t k=s.find(c);
        cout << (k==string::npos ? -1 : (int)k);
        if (c!='z') cout << ' ';
    }
}
