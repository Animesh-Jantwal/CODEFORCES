#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int LC = 0;
    int UC = 0;

    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i])) {
            LC++;
        } else {
            UC++;
        }
    }

    if (LC > UC || LC == UC) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    } else {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }
}
