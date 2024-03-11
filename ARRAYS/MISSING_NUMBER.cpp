#include <iostream>
#include <vector>

using namespace std;

int missingNumber(vector<int>& a, int N) {
    // Summation of first N numbers:
    int sum = (N * (N + 1)) / 2;

    // Summation of all array elements:
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += a[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}

int main() {
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;

    vector<int> a(N - 1); // Since one number is missing, the size will be N - 1
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N - 1; ++i) {
        cin >> a[i];
    }

    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
