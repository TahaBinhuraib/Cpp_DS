// Given an array of integers nums and an integer target, return indices of the
// two numbers such that they add up to target.

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

auto two_sum(vector<int> nums, int target) {
   struct retVals {
      int idx_1;
      int idx_2;
   };
   int idx_1, idx_2;
   // hash table to store the values of the array
   unordered_map<int, int> hash_table;
   // implement two sum
   for (int i = 0; i < nums.size(); i++) {
      int num_to_find = target - nums[i];
      // if num_to_find is found in map, return them
      if (hash_table.find(num_to_find) != hash_table.end()) {
         idx_1 = hash_table[num_to_find];
         idx_2 = i;
         break;
      }
      hash_table[nums[i]] = i;
   }
   return retVals{idx_1, idx_2};
}

int main() {
   vector<int> nums = {1, 3, 4, 6};
   int target = 10;
   auto [idx1, idx2] = two_sum(nums, target);
   cout << "index_1 -> " << idx1 << " index_2 -> " << idx2 << endl;
}
