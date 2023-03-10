/*
You are given an integer array height of length n.
There are n vertical lines drawn such that the two endpoints of the ith line are
(i, 0) and (i, height[i]). Find two lines that together with the x-axis form a
container, such that the container contains the most water. Return the maximum
amount of water a container can store.

Notice that you may not slant the container.
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
   vector<int> height = {1, 8, 6, 2, 5,
                         4, 8, 3, 7};  // same as leetcode example
   int i = 0;
   int j = height.size();  // we will have two pointers
   int max_area = min(height[i], height[j] * (j - i));
   while (i != j) {
      if (height[i] < height[j]) {
         i++;
      } else {
         j--;
      }
      max_area = max(max_area, min(height[i], height[j]) * (j - i));
   }
   cout << "This is the max area: " << max_area << endl;
}