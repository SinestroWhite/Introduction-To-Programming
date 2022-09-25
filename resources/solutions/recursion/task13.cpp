#include <vector>

/* Iterative solution
 *
  int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size();
        while (low < high) {
                int mid = (high + low) / 2;
                if (nums[mid] == target) {
                        return mid;
                }
                else if (nums[mid] < target) {
                         low = mid + 1;
                }
                else {
                        high = mid;
                }
        }
        return -1;
}
*/

int binary_search(const std::vector<int> &nums, const int low, const int high,
                  const int target) {
    if (low >= high) {
        return -1;
    }

    int mid = (high + low) / 2;

    if (nums[mid] == target) {
        return mid;
    } else if (nums[mid] < target) {
        return binary_search(nums, mid + 1, high, target);
    }
    return binary_search(nums, low, mid, target);
}
