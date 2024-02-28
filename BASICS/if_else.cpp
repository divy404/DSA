#include <iostream>
#include <string>
using namespace std;

string compareIfElse(int a, int b) {
    string st;
    
    if (a < b) {
        st = "smaller";
    } else if (a > b) {
        st = "greater";
    } else {
        st = "equal";
    }
    return st;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    string result = compareIfElse(num1, num2);
    cout << "Result: " << result << endl;

    return 0;
}
