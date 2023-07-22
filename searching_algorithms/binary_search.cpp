#include <iostream>
using namespace std;

int binary_search(int arr[], int left, int right, int x) {
  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;

    } else if (arr[mid] > x) {
      right = mid - 1;
    }
  }
  return -1;
}

int main() {
  int x, output;
  int arr[] = {10, 20, 30, 40, 50, 60};
  int arr_length = sizeof(arr) / sizeof(arr[0]);
  cout << "Array length is: " << arr_length << endl;
  output = binary_search(arr, 0, arr_length - 1, 60);
  if (output == -1) {
    cout << "No match found..." << endl;
  } else {
    cout << "Match at position: " << output << endl;
  }

  return 0;
}
