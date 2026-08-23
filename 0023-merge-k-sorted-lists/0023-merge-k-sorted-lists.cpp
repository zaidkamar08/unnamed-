class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<pair<int, ListNode*>,
                       vector<pair<int, ListNode*>>,
                       greater<pair<int, ListNode*>>> minH;

       
        for (int i = 0; i < lists.size(); i++) {
            if (lists[i]) {
                minH.push({lists[i]->val, lists[i]});
            }
        }

        ListNode* dNode = new ListNode(-1);
        ListNode* temp = dNode;

        while (!minH.empty()) {
            
            auto node = minH.top();
            minH.pop();

            temp->next = node.second;
            temp = temp->next;

            if (node.second->next) {
                minH.push({node.second->next->val, node.second->next});
            }
        }

        return dNode->next;
    }
};