//bai2
#include <iostream>
#include <vector>
using namespace std;

// Function to count subsets with product >= k
int countSubsets(vector<int>& nums, int k, int idx = 0, int sum = 0) {
    if (sum >= k || idx == nums.size()) {
        return (sum >= k) ? (1 << (nums.size() - idx)) : 0;
    }

    int count = countSubsets(nums, k, idx + 1, sum + nums[idx]);
    count += countSubsets(nums, k, idx + 1, sum);

    return count;
}

int main() {
    vector<int> nums = {1000,1601,100,200};
    int k = 1901; // Given integer k

    int result = countSubsets(nums, k);
    cout << result << endl;

    return 0;
}
