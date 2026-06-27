#include <iostream>
#include <map>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    map<char, int> freq;

    for (char ch : str) {
        freq[ch]++;
    }

    cout << "\nCharacter Frequencies:\n";
    for (auto x : freq) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}
