class Solution {
public:
    ListNode* mergeKLists(std::vector<ListNode*>& lists) {
        if (lists.empty()) return nullptr;

        ListNode head(0);
        ListNode* temp = &head;

        while (true) {
            int p = 0;
            for (int i = 0; i < lists.size(); i++) {
                if (lists[p] == nullptr || (lists[i] != nullptr && lists[p]->val > lists[i]->val)) {
                    p = i;
                }
            }

            if (lists[p] == nullptr) {
                break;
            }

            temp->next = lists[p];
            temp = temp->next;
            lists[p] = lists[p]->next;
        }

        return head.next;
    }
};