#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v, result;
    int n, x;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); i++) {
        bool found = false;

        for(int j = 0; j < result.size(); j++) {
            if(v[i] == result[j]) {
                found = true;
                break;
            }
        }

        if(!found)
            result.push_back(v[i]);
    }

    cout << "After Removing Duplicates: ";

    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}