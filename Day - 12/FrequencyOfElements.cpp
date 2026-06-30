#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    map<int, int> freq;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    cout << "\nElement Frequencies:\n";
    for(auto x : freq)
    {
        cout << x.first << " -> " << x.second << endl;
    }

    return 0;
}