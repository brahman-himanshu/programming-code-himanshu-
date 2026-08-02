#include <iostream>
#include <vector>
#include <set>

int main() {
    std::vector<int> nums = {1, 2, 2, 3, 4, 4, 5};

    std::set<int> uniqueNums(nums.begin(), nums.end());

    for (int num : uniqueNums)
        std::cout << num << " ";
}