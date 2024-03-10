#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int>& a) {
    int j = -1;
    //place the pointer j:
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }

    //no non-zero elements:
    if (j == -1) return;

    //Move the pointers i and j
    //and swap accordingly:
    for (int i = j + 1; i < a.size(); i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
}

int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    moveZeros(arr);
    for (auto it = arr.begin(); it != arr.end(); it++) {
        cout << *it << " ";
    }
    cout << '\n';
    return 0;
}
