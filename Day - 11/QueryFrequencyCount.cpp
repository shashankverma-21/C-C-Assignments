#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    map<int, int> freq;
    int x;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        freq[x]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q--) {
        int key;
        cout << "Enter element to search: ";
        cin >> key;

        cout << key << " occurs " << freq[key] << " time(s)." << endl;
    }

    return 0;
}