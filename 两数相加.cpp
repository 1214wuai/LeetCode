/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string s1,s2;
        while(l1)
        {
            s1.push_back(l1->val+'0');
                l1 = l1->next;
        }
        while(l2)
        {
            s2.push_back(l2->val+'0');
            l2 = l2->next;
        }
        
        vector<int> v;
        int ret = 0;
        int flag = 0;
        int sz1 = s1.size();
        int sz2 = s2.size();
        int i = 0;
        while(i<sz1 && i<sz2)
        {
            ret = (s1[i]-'0')+(s2[i]-'0')+flag;
            if(ret >= 10)
            {
                ret%=10;
                flag = 1;
            }
            else
                flag = 0;
            v.push_back(ret);
            i++;
        }
        if(i==sz1)
        {
            while(i<sz2)
            {
                ret = s2[i]-'0'+flag;
                if(ret>=10)
                {
                    ret%=10;
                    flag = 1;
                }
                else
                    flag = 0;
                v.push_back(ret);
                i++;
            }
        }
        else
        {
            while(i<sz1)
            {
                ret = s1[i]-'0'+flag;
                if(ret>=10)
                {
                    ret%=10;
                    flag = 1;
                }
                else
                    flag = 0;
                v.push_back(ret);
                i++;
            }
        }
        if(flag)
            v.push_back(flag);
        ListNode* l3 = NULL;
        
        if(!v.empty())
            l3 = new ListNode(v[0]);
        ListNode* cur = l3;
        for(int i = 1; i<v.size(); i++)
        {
            ListNode* New = new ListNode(v[i]);
            cur->next = New;
            cur = cur->next;
        }
        return l3;
    }
};