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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp=head;
        int length=0;
        while (temp!=NULL)
        {
            temp=temp->next;
            length=length+1;
        }
        if (n==length)
            return head->next;

        else
        {
            temp=head;
            int j=length-n;
            for (int i=1;i<j;i++)
            {
                temp=temp->next;
            }
            temp->next=temp->next->next;
            return head;
        }




    }
};
int main ()
{
    Solution s;

    return 0;

}
