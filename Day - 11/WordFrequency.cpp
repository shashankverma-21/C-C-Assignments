#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;

    cout << "Enter number of words: ";
    cin >> n;

    map<string, int> freq;
    string word;

    cout << "Enter words:\n";

    for (int i = 0; i < n; i++) {
        cin >> word;
        freq[word]++;
    }

    cout << "\nWord Frequencies:\n";

    for (auto x : freq) {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}