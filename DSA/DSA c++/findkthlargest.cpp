#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        return nums[nums.size() - k];
    }
};

int main() {

    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;

    Solution obj;

    int result = obj.findKthLargest(nums, k);

    cout << "Kth Largest Element is: " << result << endl;

    return 0;
}