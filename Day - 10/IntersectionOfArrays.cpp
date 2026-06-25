#include <iostream>
#include <set>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;

    set<int> s1, intersection;
    int x;

    for(int i = 0; i < n1; i++) {
        cin >> x;
        s1.insert(x);
    }

    cin >> n2;

    for(int i = 0; i < n2; i++) {
        cin >> x;

        if(s1.find(x) != s1.end())
            intersection.insert(x);
    }

    cout << "Intersection: ";

    for(int num : intersection)
        cout << num << " ";

    return 0;
}