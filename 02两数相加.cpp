class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        //模拟数值进位
        ListNode* dummy = new ListNode(-1);
        ListNode* cur = dummy;
        int t = 0;
        while(t||l1||l2)
        {
            if(l1)
            {
                t+=l1->val;
                l1 = l1->next;
            }

            if(l2)
            {
                t+=l2->val;
                l2 = l2->next;
            }

            cur->next = new ListNode(t%10);
            cur = cur->next;
            t = t/10;
        }

        return dummy->next;
    }
};
