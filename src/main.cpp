#include "output.hpp"
#include "./array/easy/1.两数之和/solution.cpp"

using namespace std;

Output output;
Solution solution;

int main(int, char**){
    vector<int> nums = {3, 2, 4};
    int target = 6;

    output.printfArr(solution.twoSum(nums, target));

    return 0;
}
