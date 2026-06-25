#include <iostream>
#include <set>
using namespace std;

int main() {
    int n1, n2, x;
    set<int> s;

    cin >> n1;

    for(int i = 0; i < n1; i++) {
        cin >> x;
        s.insert(x);
    }

    cin >> n2;

    for(int i = 0; i < n2; i++) {
        cin >> x;
        s.insert(x);
    }

    cout << "Union: ";

    for(int num : s)
        cout << num << " ";

    return 0;
}