#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    map<char, int> freq;

    for(char ch : str)
        freq[ch]++;

    for(char ch : str)
    {
        if(freq[ch] == 1)
        {
            cout << "First Non-Repeating Character = " << ch;
            return 0;
        }
    }

    cout << "No non-repeating character found.";

    return 0;
}