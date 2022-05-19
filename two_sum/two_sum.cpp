#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int> nums, int target) {
        std::vector<int> ans;

        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i+1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target) {
                    ans = {i, j};
                    goto end;
                }
            }
        }
        end:
        return ans;
    }
};

template<typename T>
void print_vector_string(std::vector<T> vec) {
    std::cout << "[ ";
    for (auto val : vec)
        std::cout << val << " ";
    std::cout << "]" << std::endl;
}

int main(int argc, char const *argv[])
{
    Solution solution;
    std::vector<int> nums = {6, 8, 2, 7};
    int target = 9;
    std::vector<int> ans = solution.twoSum(nums, target);

    std::cout << "nums: ";
    print_vector_string(nums);

    std::cout << "target: " << target << std::endl;

    std::cout << "ans: ";
    print_vector_string(ans);

    return 0;
}