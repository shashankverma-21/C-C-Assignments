#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n, x;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    int minElement = v[0];

    for(int i = 1; i < v.size(); i++) {
        if(v[i] < minElement)
            minElement = v[i];
    }

    cout << "Minimum Element = " << minElement;

    return 0;
}