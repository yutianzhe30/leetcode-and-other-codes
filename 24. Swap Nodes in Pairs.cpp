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
    ListNode* swapPairs(ListNode* head) {
         if (head==NULL||head->next==NULL)
         {
             return head;
         }
        ListNode* p1=head;
        ListNode* p2=head->next;
        ListNode* result=p2;
        ListNode* dummy=new ListNode(0);
        while(head->next!=NULL)
        {
            p1->next=p2->next;
            p2->next=p1;
             dummy->next=p2;
            dummy=p1;
            p1=p1->next;
            if (p1==NULL||p1->next==NULL)
            {break;}
            p2=p1->next;

        }
        return result;
    }
};
int main ()
{
    Solution s;

    return 0;

}
