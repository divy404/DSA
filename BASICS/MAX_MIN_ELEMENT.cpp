#include <iostream>
#include <unordered_map>
using namespace std;
void frequency(int arr[], int n)
{
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
        map[arr[i]]++;
    int maxfreq = 0, minfreq = 0;
    int maxele = 0, minele = 0;
    for (auto it : map)
    {
        int count = it.second;
        int element = it.first;
        if (count > maxfreq)
        {
            maxele = element;
            maxfreq = count;
        }
        if (count < minfreq)
        {
            maxele = element;
            maxfreq = count;
        }
        if (count < minfreq)
        {
            minele = element;
            minfreq = count;
        }
    }
    cout << "HIGHEST FREQUENCY: " << maxele << endl;
    cout << "MINIMUM FREQUENCY: " << minele << endl;
}
int main()
{
    int arr[] = {10, 5, 15, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    frequency(arr, n);
    return 0;
}