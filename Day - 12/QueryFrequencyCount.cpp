#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    map<int, int> freq;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    int q;

    cout << "Enter number of queries: ";
    cin >> q;

    while(q--)
    {
        int x;
        cout << "Enter element to search: ";
        cin >> x;

        cout << "Frequency of " << x << " = " << freq[x] << endl;
    }

    return 0;
}