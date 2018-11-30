//
// Created by hotch on 18-11-30.
//
#include <iostream>
#include <vector>
#include "twoSum.h"

std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) {
    long len = nums.size();
    int cha = 0;
    int i = 0, j = 0;
    std::vector<int> result;
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

