#include<iostream>
using  namespace std;
int findLargestElement(int arr[], int n) {
 
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}
int main() {
  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;
  
  int arr[n];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  
  int largest = findLargestElement(arr, n);
  cout << "The largest element in the array is: " << largest << endl;
  
  return 0;
}
