#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<string> cro = {"dz=","c=","c-","d-","lj","nj","s=","z="};

    for (const string &pat : cro) {
        size_t pos = 0;
        while ((pos = s.find(pat, pos)) != string::npos) {
            s.replace(pos, pat.size(), "#");
        }
    }
    cout << s.size() << '\n';
}