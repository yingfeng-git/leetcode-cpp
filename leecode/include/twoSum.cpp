//
// Created by hotch on 18-11-30.
//
#include <iostream>
#include <vector>
#include <unordered_map>
#include "twoSum.h"

std::vector<int> Solution::twoSum2(std::vector<int>& nums, int target) {
    /*
     * 这次试一下用unordered_map来实现，unordered_map。
     * unordered_map内部实现了哈希表，查询速度非常快。缺点是建立map的时间长。
     * map：特点是有序存储，内部实现了红黑树，很多操作在O(logn)下就能实现。缺点是占用空间大，用空间换效率
     */

    long len = nums.size();
    std::vector<int> result;
    std::unordered_map<int, int> nums_map = {};

    for(int i = 0; i < len; i++){
        nums_map[nums[i]] = i;
    }

    for(int i = 0; i < len; i++){
        int cha = target - nums[i];
        if(nums_map.find(cha) != nums_map.end()){
            result = {i, nums_map[cha]};
            return result;
        }
    }

    return result;
}

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



