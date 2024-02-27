#include <iostream>
using namespace std;

int main() {
    char chr;
    cin >> chr;

    if (chr >= 'A' && chr <= 'Z') {
        cout << "1" << endl;
    } else if (chr >= 'a' && chr <= 'z') {
        cout << "0" << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}
