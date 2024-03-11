#include "MaxSubarray.h"


int maxSubarray(vector<int>& nums) {
  //   +=====================================================+
  //   |                 WRITE YOUR CODE HERE                |
  //   | Description:                                        |
  //   | - This function finds the sum of the contiguous     |
  //   |   subarray with the largest sum from the given      |
  //   |   array 'nums'.                                     |
  //   | - It uses Kadane's algorithm for this task.         |
  //   |                                                     |
  //   | Return type: int                                    |
  //   |                                                     |
  //   | Tips:                                               |
  //   | - 'maxSum' stores the maximum subarray sum.         |
  //   | - 'currentSum' keeps track of the sum of the        |
  //   |   subarray ending at the current index.             |
  //   | - Use 'max' to update 'maxSum' and 'currentSum'.    |
  //   | - Check output from Test.cpp in "User logs".        |
  //   +=====================================================+
  if (nums.empty()) return 0; // Handle the case when the array is empty

    int maxSum = nums[0];
    int currentSum = nums[0];

    // Start from the second element since we already used the first one
    for (int i = 1; i < nums.size(); ++i) {
        // Current sum is either the current element or current element + currentSum (which can be negative)
        currentSum = std::max(nums[i], currentSum + nums[i]);
        // Update maxSum if currentSum is greater
        maxSum = std::max(maxSum, currentSum);
    }

    return maxSum;
}