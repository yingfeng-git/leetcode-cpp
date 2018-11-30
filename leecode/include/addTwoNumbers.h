//
// Created by hotch on 18-11-30.
//

#ifndef LEECODE_ADDTWONUMBERS_H
#define LEECODE_ADDTWONUMBERS_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};

#endif //LEECODE_ADDTWONUMBERS_H
