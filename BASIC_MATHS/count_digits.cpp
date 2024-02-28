#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    int num = n;

    if (n == 0)
        return 1;

    while (n > 0) {
        int rem = n % 10;
        if ((rem != 0) && (num % rem == 0))
            count++;
        n /= 10;
    }

    return count;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = countDigits(number);
    cout << "Count of digits satisfying the condition: " << result << endl;

    return 0;
}
