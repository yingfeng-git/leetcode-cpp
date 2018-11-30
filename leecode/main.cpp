#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        long len = nums.size();
        int cha = 0;
        int i = 0, j = 0;
        vector<int> result;
        for(i = 0; i <= len - 1; i++){
            cha = target - nums[i];
            for(j = i; j <= len - 1; j++){
                if(nums[j] == cha){
                    if(i==j){
                        continue;
                    }
                    result = {i, j};
                    return result;
                }
            }
        }
        return result;
    }
};

int main(){
    vector<int> nums = {217,231,523,52,547,243,648,509,415,149,689,710,265,187,370, 56,977,182,400,329,471,805,955,989,255,766,38,566,79,843,295, 229,988,108,781,619,704,542,335,307,359,907,727,959,161,699,123,650,147,459,657,188,304,268,405,685,620,721,351,570,899,60,388,771,24,659,425,440,508,373,32,645,409,272,356,175,533,740,370,152,34,510,745,251,227,494,258,527,817,773,178,194,860,387,627,851,449,736,15,212,529,950,316,28,65,484,968,63,4,643,795,669,203,677,139,636,289,555,430,849,150,493,301,377,240,873,965,441,230,349,447,470};
    vector<int> result;
    int target = 718;

    result = Solution().twoSum(nums, target);
    std::cout << result[0] << ',' << result[1] << std::endl;
}