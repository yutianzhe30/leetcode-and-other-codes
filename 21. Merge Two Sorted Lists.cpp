#include <iostream>
#include <deque>
#include <unordered_map>
#include <string>
#include <vector>
/**
 * Definition for singly-linked list. */
  struct ListNode {
    int val;
    ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        ListNode* swap1;
        ListNode* result;
        ListNode* noresult;
        if (l1==NULL)
            return l2;
        else if (l2==NULL)
            return l1;
        if (l1->val<=l2->val)
        {
            result =l1;
            noresult=l2;
        }
        else
        {
            result =l2;
           noresult=l1;
        }
        ListNode *pointer= result;
        ListNode *pointer2=noresult;
        while (1)
        {
            if (pointer->next==NULL)
            {
                pointer->next=pointer2;
                break;
            }
            if (pointer2==NULL)
            {
                break;
            }
            if (pointer2->val>=pointer->val)
            {
                if (pointer2->val<pointer->next->val)
                {
                    swap1=pointer2->next;
                    pointer2->next=pointer->next;
                    pointer->next=pointer2;
                    pointer2=swap1;
                }
                else
                {
                    pointer=pointer->next;
                }
            }

        }


        return result;
    }
};
int main ()
{


    return 0;

}
