#include <iostream>
#include <vector>
#include "twoSum.h"
using namespace std;

// ==============定义区=============
void twoSum();
void addTwoNumbers();
// ================================


int main(){
    twoSum();
    return 0;
}


void twoSum(){
    /*
     * 执行一个简单的用例
     */
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    vector<int> result;
    int target = 9;
    result = solution.twoSum2(nums, target);
    std::cout << result[0] << ',' << result[1] << std::endl;

    std::cout << "预期的结果为：0, 1" << endl;
}