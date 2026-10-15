// Task 3: Character check using <cctype>
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (islower(ch))
        cout << "Your character '" << ch << "' is in lowercase. Its uppercase is "
             << (char)toupper(ch) << endl;
    else if (isupper(ch))
        cout << "Your character '" << ch << "' is in uppercase. Its lowercase case is "
             << (char)tolower(ch) << endl;
    else if (isdigit(ch))
        cout << "Your character '" << ch << "' is a digit." << endl;
    else
        cout << "Your character '" << ch << "' special character" << endl;

    return 0;
}
