#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n, x;

    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    cout << "Vector Elements: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
