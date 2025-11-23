#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    int groupWordCount = 0;

    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;

        bool visited[26] = { false };
        bool is_Group = true;         

        visited[str[0] - 'a'] = true;

        for (int j = 1; j < str.length(); j++) {
            if (str[j] != str[j - 1]) {
                if (visited[str[j] - 'a']) {
                    is_Group = false;
                    break;
                }

                visited[str[j] - 'a'] = true;
            }
        }

        if (is_Group) {
            groupWordCount++;
        }
    }

    cout << groupWordCount;

}