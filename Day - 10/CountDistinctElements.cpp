#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, x;
    set<int> s;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }

    cout << "Number of Distinct Elements = " << s.size();

    return 0;
}