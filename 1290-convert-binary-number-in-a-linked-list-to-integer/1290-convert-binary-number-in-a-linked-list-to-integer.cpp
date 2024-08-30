/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int i=0;
        vector<int> arr;
        while(head != nullptr){
            arr.push_back(head->val) ;
            head = head->next;
        }
        int ans=0;
        int n=arr.size();
        for(int j=0; j<n; j++){
            ans += arr[j]*pow(2,n-1-j);
        }
        return ans;
    }
};